#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a newline.
 *
 * @s: The string to be printed in reverse.
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	s--;

	while (length > 0)
	{
		_putchar(*s);
		s--;
		length--;
	}

	_putchar('\n');
}

