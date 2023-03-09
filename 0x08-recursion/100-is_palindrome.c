/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int len = _strlen(s);

    /* Base cases */
    if (len <= 1)
        return 1;
    if (s[0] != s[len - 1])
        return 0;

    /* Recursively check the remaining substring */
    return is_palindrome_helper(s + 1, len - 2);
}

/**
 * is_palindrome_helper - helper function for is_palindrome
 * @s: the string to check
 * @len: the length of the remaining substring
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int len)
{
    if (len <= 0)
        return 1;
    if (s[0] != s[len])
        return 0;
    return is_palindrome_helper(s + 1, len - 2);
}

/**
 * _strlen - returns the length of a string
 * @s: the string to check
 *
 * Return: the length of s
 */
int _strlen(char *s)
{
    if (*s == '\0')
        return 0;
    return 1 + _strlen(s + 1);
}

