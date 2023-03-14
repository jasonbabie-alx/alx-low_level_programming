#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words.
 * @str: pointer to a string.
 *
 * Return: pointer to an array of strings (words) or NULL if it fails.
 */
char **strtow(char *str)
{
    char **words;
    int i, j, k, len, count = 0;

    if (str == NULL || str[0] == '\0')
        return (NULL);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
            count++;
    }

    words = malloc((count + 1) * sizeof(char *));

    if (words == NULL)
        return (NULL);

    for (i = 0, k = 0; i < count; i++)
    {
        while (str[k] == ' ')
            k++;

        for (len = 0; str[k + len] != ' ' && str[k + len] != '\0'; len++)
            ;

        words[i] = malloc((len + 1) * sizeof(char));

        if (words[i] == NULL)
        {
            for (j = 0; j < i; j++)
                free(words[j]);
            free(words);
            return (NULL);
        }

        for (j = 0; j < len; j++)
            words[i][j] = str[k + j];

        words[i][j] = '\0';
        k += len;
    }

    words[i] = NULL;

    return (words);
}

