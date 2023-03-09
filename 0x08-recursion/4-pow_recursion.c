#include "main.h"

/**
 * _pow_recursion - Calculates the value of x raised to the power of y recursively
 * @x: The base number
 * @y: The exponent
 *
 * Return: The value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
    if (y < 0)  /* Base case: if the exponent is negative */
    {
        return -1;  /* Return -1 to indicate an error */
    }
    else if (y == 0)  /* Base case: if the exponent is 0 */
    {
        return 1;  /* Return 1 to indicate that the result is 1 */
    }
    else  /* Recursive case: if the exponent is positive */
    {
        return x * _pow_recursion(x, y - 1);  /* Recursively call the function with y - 1 and multiply the result by x to calculate x raised to the power of y */
    }
}

