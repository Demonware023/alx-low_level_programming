#include "main.h"

/**
 * _strstr - Locates the first occurrence of the substring needle
 *           in the string haystack.
 * @haystack: The string to be searched
 * @needle: The substring to search for
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*n && (*h == *n))
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
