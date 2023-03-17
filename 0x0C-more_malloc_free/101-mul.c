#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_valid_number - checks if a string is a valid number
 * @s: the string to check
 *
 * Return: 1 if the string is a valid number, 0 otherwise
 */
int is_valid_number(char *s)
{
        int i;

        for (i = 0; s[i]; i++)
                if (s[i] < '0' || s[i] > '9')
                        return (0);

        return (1);
}

/**
 * main - multiplies two positive numbers
 * @argc: the number of command-line arguments
 * @argv: an array containing the command-line arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
        int i, j, k, carry, len1, len2, *result;
        char *s1, *s2;

        if (argc != 3) {
                printf("Error\n");
                return (98);
        }

        s1 = argv[1];
        s2 = argv[2];

        if (!is_valid_number(s1) || !is_valid_number(s2)) {
                printf("Error\n");
                return (98);
        }

        len1 = 0;
        while (s1[len1])
                len1++;

        len2 = 0;
        while (s2[len2])
                len2++;

        result = calloc(len1 + len2, sizeof(int));
        if (result == NULL)
                return (1);

        for (i = len1 - 1; i >= 0; i--) {
                carry = 0;
                for (j = len2 - 1; j >= 0; j--) {
                        k = i + j + 1;
                        result[k] += (s1[i] - '0') * (s2[j] - '0') + carry;
                        carry = result[k] / 10;
                        result[k] %= 10;
                }
                result[i] += carry;
        }

        i = 0;
        while (i < len1 + len2 && result[i] == 0)
                i++;

        if (i == len1 + len2)
                putchar('0');
        else
                for (; i < len1 + len2; i++)
                        putchar(result[i] + '0');

        putchar('\n');

        free(result);

        return (0);
}
