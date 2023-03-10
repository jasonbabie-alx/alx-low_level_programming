#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first
 *         character, followed by a new line.
 *
 * @str: The string to be printed.
 *
 * Return: void.
 */
void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i+=2;
	}
	_putchar('\n');
}

