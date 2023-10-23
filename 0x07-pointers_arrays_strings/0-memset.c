#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
  * *_memset - fills the memory of a constant byte
  *
  * @*s: pointer to the memory area
  *
  * @n: bytes of the memory area to be filled
  *
  * @b: Constant byte to be used to fill memory area
  *
  * Return: s
  */

char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0 ; i < n ; i++)
		*(s + 1) = b;

	return (s);
}
