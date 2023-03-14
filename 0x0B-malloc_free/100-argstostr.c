#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments.
 * @av: pointer to an array of strings.
 *
 * Return: pointer to the new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
    char *str;
    int i, j, k = 0, len = 0;

    if (ac == 0 || av == NULL)
        return (NULL);

    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
            len++;
        len++;
    }

    str = malloc((len + 1) * sizeof(char));

    if (str == NULL)
        return (NULL);

    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            str[k] = av[i][j];
            k++;
        }
        str[k] = '\n';
        k++;
    }

    str[k] = '\0';

    return (str);
}

