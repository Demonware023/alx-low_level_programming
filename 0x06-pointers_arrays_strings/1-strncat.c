#include "main.h"
#include <string.h>

/**
 * *_strncat - concatenates two strings with n bytes
 * @src: length of source string
 * @dest: length of destination string
 * @n: most bytes to be used
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = strlen(dest);

	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';

	return (dest);
}
