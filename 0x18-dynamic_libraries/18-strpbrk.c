#include "main.h"

/**
 * _strpbrk - Locates the first occurrence in the string s of any character
 *            from the string accept.
 * @s: The string to be searched
 * @accept: The set of characters to search for
 *
 * Return: Pointer to the first occurrence of a character from accept in s,
 *         or NULL if no such character is found.
 */

char *_strpbrk(char *s, char *accept)
{
	char *ptr;

	while (*s != '\0')
	{
		ptr = accept;

		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				return (s);
			}
			ptr++;
		}
		s++;
	}
	return (NULL);
}
