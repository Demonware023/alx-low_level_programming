#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: destination to be copied to
 * @src: source to be copied from
 * @n: bytes to be copied
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int srclen;

	for (i = 0 ; src[i] != '\0' ; i++)
		srclen++;
	for (i = 0 ; i <= n && src[i] != '\0' ; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
