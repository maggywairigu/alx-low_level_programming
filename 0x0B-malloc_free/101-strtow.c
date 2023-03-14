#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
    int i, count = 0;

    for (i = 0; str[i]; i++)
    {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
            count++;
    }

    return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
    char **words;
    int i, j, k, count = 0, len = 0;

    if (str == NULL || *str == '\0')
        return (NULL);

    count = count_words(str);
    words = malloc(sizeof(char *) * (count + 1));
    if (words == NULL)
        return (NULL);

    for (i = 0, k = 0; str[i]; i++)
    {
        if (str[i] != ' ')
        {
            len = 0;
            for (j = i; str[j] && str[j] != ' '; j++)
                len++;

            words[k] = malloc(sizeof(char) * (len + 1));
            if (words[k] == NULL)
            {
                for (k--; k >= 0; k--)
                    free(words[k]);
                free(words);
                return (NULL);
            }

            for (j = 0; j < len; j++, i++)
                words[k][j] = str[i];
            words[k++][j] = '\0';
        }
    }

    words[k] = NULL;

    return (words);
}
