#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to be modified.
 *
 * Return: A pointer to the modified string @s.
 */
char *cap_string(char *s)
{
    int i;

    /* Capitalize the first letter of the string */
    if (s[0] >= 'a' && s[0] <= 'z')
    {
        s[0] = s[0] - 'a' + 'A';
    }

    /* Capitalize the first letter of each word */
    for (i = 1; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' &&
            (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' ||
             s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
             s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
             s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
             s[i - 1] == '}'))
        {
            s[i] = s[i] - 'a' + 'A';
        }
    }

    return (s);
}

