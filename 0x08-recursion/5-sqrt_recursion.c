#include "main.h"

/**
 * sqrt_recursive - Recursively calculates the natural square root of a number
 * @n: The number to calculate the square root of
 * @i: The current guess for the square root
 *
 * Return: The natural square root of the number, or -1 if the number does not have a natural square root
 */

int sqrt_recursive(int n, int i)
{
    if (i * i == n)  /* Base case: if i squared is equal to n */
    {
        return i;  /* Return i as the natural square root of n */
    }
    else if (i * i > n)  /* Base case: if i squared is greater than n */
    {
        return -1;  /* Return -1 to indicate that n does not have a natural square root */
    }
    else  /* Recursive case: if i squared is less than n */
    {
        return sqrt_recursive(n, i + 1);  /* Recursively call the function with i + 1 to try the next guess for the square root */
    }
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number recursively
 * @n: The number to calculate the square root of
 *
 * Return: The natural square root of the number, or -1 if the number does not have a natural square root
 */

int _sqrt_recursion(int n)
{
    if (n < 0)  /* If n is negative */
    {
        return -1;  /* Return -1 to indicate an error */
    }
    else  /* If n is non-negative */
    {
        return sqrt_recursive(n, 0);  /* Call the recursive function with an initial guess of 0 */
    }
}

