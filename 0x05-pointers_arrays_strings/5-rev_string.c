#include "main.h"

/**
 * rev_string - Reverses a string.
 *
 * @s: The string to be reversed.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	char temp;
	int i, j, length;

	length = _strlen(s);

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}

