#include "main.h"

/**
 * *_strncat - concatenates two strings with n bytes
 * @src: length of source string
 * @dest: length of destination string
 * @n: most bytes to be used
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int srclen = 0;
	int destlen = 0;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		srclen++;
	for (i = 0 ; i < n && dest[i] != '\0' ; i++)
		destlen++;

	for (i = 0 ; srclen <= n ; i++)
		dest[destlen + i] = src[i];

	return (dest);
}
