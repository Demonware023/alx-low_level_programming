#include "main.h"

/**
  * *_memcpy - funtions that copies memory area
  *
  *@src: source to be copied from
  *
  *@dest: destination to be copied to
  *
  *@n: particular bytes from src to be copied to dest
  *
  *Return: dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (ptr);
}
