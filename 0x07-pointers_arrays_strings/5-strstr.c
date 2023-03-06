#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: Pointer to the string to be searched.
 * @needle: Pointer to the substring to be located.
 *
 * Return: A pointer to the beginning of the located substring, or NULL if the
 *         substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, k;

	for (i = 0; haystack[i]; i++)
	{
		for (j = i, k = 0; needle[k]; j++, k++)
		{
			if (haystack[j] != needle[k] || !haystack[j])
				break;
		}

		if (needle[k] == '\0')
			return (&haystack[i]);
	}

	return (NULL);
}

