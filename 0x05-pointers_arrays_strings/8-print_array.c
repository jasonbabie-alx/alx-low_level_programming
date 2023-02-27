#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to the array of integers
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		j = a[i];
		if (j < 0)
		{
			_putchar('-');
			j = -j;
		}
		if (j / 10)
			print_number(j / 10);
		_putchar('0' + j % 10);
		if (i < n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}

/**
 * print_number - prints a positive integer
 * @n: the integer to print
 */
void print_number(unsigned int n)
{
	if (n / 10)
		print_number(n / 10);
	_putchar('0' + n % 10);
}

