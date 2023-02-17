#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('$');
		}
		i++;
	}
	return (0);
}

