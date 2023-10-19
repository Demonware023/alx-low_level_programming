#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @p: pointer
 * Return: p
 */

char *string_toupper(char *p)
{
	int i = 0;

	for (i = 0 ; p[i] != '\0' ; i++)
	{
		if (p[i] >= 'a' && p[i] <= 'z')
			p[i] = p[i] - 32;
	}

	return (p);
}
