#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * count_words - count the number of words in a string
 * @str: the string to count words in
 *
 * Return: the number of words in the string
 */
static int count_words(const char *str)
{
    int count = 0;

    while (*str)
    {
        while (*str && (*str == ' ' || *str == '\t'))
            str++;
        if (*str)
            count++;
        while (*str && *str != ' ' && *str != '\t')
            str++;
    }

    return (count);
}

/**
 * strtow - split a string into words
 * @str: the string to split
 *
 * Return: If str is NULL or an empty string, return NULL.
 *         If memory allocation fails, return NULL.
 *         Otherwise, return a pointer to an array of strings
 *         (all words in str, terminated by a NULL pointer).
 */
char **strtow(char *str)
{
    char **words;
    int i, j, k, n;

    if (str == NULL || *str == '\0')
        return (NULL);

    n = count_words(str);
    if (n == 0)
        return (NULL);

    words = malloc((n + 1) * sizeof(char *));
    if (words == NULL)
        return (NULL);

    for (i = 0, k = 0; i < n; i++)
    {
        while (*str && (*str == ' ' || *str == '\t'))
            str++;
        j = 0;
        while (str[j] && str[j] != ' ' && str[j] != '\t')
            j++;
        words[k] = malloc((j + 1) * sizeof(char));
        if (words[k] == NULL)
        {
            for (i = 0; i < k; i++)
                free(words[i]);
            free(words);
            return (NULL);
        }
        for (j = 0; *str && *str != ' ' && *str != '\t'; j++, str++)
            words[k][j] = *str;
        words[k][j] = '\0';
        k++;
    }
    words[k] = NULL;

    return (words);
}
