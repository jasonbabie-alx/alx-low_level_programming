#include "main.h"

/**
 * _strlen_recursion - Calculates the length of a string recursively
 * @s: The string whose length is to be calculated
 *
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
    if (*s == '\0')  /* Base case: if we've reached the end of the string */
    {
        return 0;  /* Return 0 to indicate that the length of the string is 0 */
    }
    return (1 + _strlen_recursion(s + 1));  /* Recursively call the function with the next character in the string and add 1 to the result to calculate the length of the string */
}

