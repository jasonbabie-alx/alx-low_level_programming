#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse recursively
 * @s: The string to be printed in reverse
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
    if (*s == '\0')  /* Base case: if we've reached the end of the string */
    {
        return;  /* Return from the function without printing anything */
    }
    _print_rev_recursion(s + 1);  /* Recursively call the function with the next character in the string */
    _putchar(*s);  /* Print the current character after all the subsequent characters have been printed */
}

