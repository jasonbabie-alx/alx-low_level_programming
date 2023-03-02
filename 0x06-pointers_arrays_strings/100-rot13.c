/**
 * rot13 - Encodes a string using ROT13
 *
 * @str: The string to encode
 *
 * Return: A pointer to the encoded string
 */
char *rot13(char *str)
{
    char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
    int i, j;

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; alpha[j] != '\0'; j++)
        {
            if (str[i] == alpha[j])
            {
                str[i] = rot13[j];
                break;
            }
        }
    }

    return str;
}

