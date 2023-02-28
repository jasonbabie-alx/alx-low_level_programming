#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to the array of integers
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int i;
	
	i = 0;
	while (i < n - 1)
	{
		_putchar(a + i);
		_putchar(',');
		_putchar(' ');
	}
	_putchar(a + n - 1);
