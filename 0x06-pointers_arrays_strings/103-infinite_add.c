#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: size of buffer
 * Return: pointer to the result, or 0 if result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, len_sum, carry, num1, num2, sum;
	char *rev_n1, *rev_n2, *rev_r;

	for (len1 = 0; n1[len1]; len1++)
		;
	for (len2 = 0; n2[len2]; len2++)
		;

	if (len1 > size_r || len2 > size_r)
		return (0);

	rev_n1 = reverse_string(n1, len1);
	rev_n2 = reverse_string(n2, len2);
	rev_r = reverse_string(r, size_r);

	carry = 0;
	len_sum = 0;
	while (len_sum < size_r - 1 && (len_sum < len1 || len_sum < len2 || carry))
	{
		num1 = (len_sum < len1) ? (rev_n1[len_sum] - '0') : 0;
		num2 = (len_sum < len2) ? (rev_n2[len_sum] - '0') : 0;
		sum = num1 + num2 + carry;
		carry = sum / 10;
		rev_r[len_sum] = (sum % 10) + '0';
		len_sum++;
	}

	if (len_sum == size_r - 1 && (len_sum < len1 || len_sum < len2 || carry))
		return (0);

	rev_r[len_sum] = '\0';
	reverse_string(rev_r, len_sum);

	return (rev_r);
}

/**
 * reverse_string - reverses a string
 * @str: string to reverse
 * @len: length of string
 * Return: pointer to reversed string
 */
char *reverse_string(char *str, int len)
{
	int i, j;
	char temp;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}

	return (str);
}

