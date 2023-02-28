#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 *
 * @str: The string to be printed.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int i, len, n;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
	}

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
}

