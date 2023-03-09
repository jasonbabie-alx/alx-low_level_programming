#include "main.h"

/**
 * factorial - Calculates the factorial of a given number recursively
 * @n: The number whose factorial is to be calculated
 *
 * Return: The factorial of the number
 */

int factorial(int n)
{
    if (n < 0)  /* Base case: if the number is negative */
    {
        return -1;  /* Return -1 to indicate an error */
    }
    else if (n == 0)  /* Base case: if the number is 0 */
    {
        return 1;  /* Return 1 to indicate that the factorial is 1 */
    }
    else  /* Recursive case: if the number is positive */
    {
        return n * factorial(n - 1);  /* Recursively call the function with n - 1 and multiply the result by n to calculate the factorial of n */
    }
}

