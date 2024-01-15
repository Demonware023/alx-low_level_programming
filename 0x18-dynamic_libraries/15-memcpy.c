#include "main.h"

/**
 * _memcpy - Copies n bytes from src to dest
 * @dest: Destination pointer
 * @src: Source pointer
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination string (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
