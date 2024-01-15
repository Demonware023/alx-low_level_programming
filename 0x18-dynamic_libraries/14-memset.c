#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory pointed to by s with the value of b
 * @s: Pointer to the memory to be filled
 * @b: Value to be set
 * @n: Number of bytes to be set to the value
 *
 * Return: Pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}

	return (s);
}
