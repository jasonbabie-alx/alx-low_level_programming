/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
    /* Base cases */
    if (n <= 1)
        return 0;
    if (n == 2 || n == 3)
        return 1;

    /* Check if n is divisible by any number up to sqrt(n) */
    return is_prime_helper(n, 2);
}

/**
 * is_prime_helper - helper function for is_prime_number
 * @n: the number to check
 * @i: the divisor to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
    /* If i is greater than sqrt(n), n is prime */
    if (i > n / i)
        return 1;

    /* If n is divisible by i, it is not prime */
    if (n % i == 0)
        return 0;

    /* Check the next divisor */
    return is_prime_helper(n, i + 1);
}

