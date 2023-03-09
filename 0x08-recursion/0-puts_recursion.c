#include "main.h"

/**
 * _puts_recursion - Prints a string recursively
 * @s: The string to be printed
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
    if (*s == '\0')  /* Base case: if we've reached the end of the string */
    {
        _putchar('\n');  /* Print a newline character and return */
        return;
    }
    _putchar(*s);  /* Print the current character in the string */
    _puts_recursion(s + 1);  /* Recursively call the function with the next character in the string */
}

