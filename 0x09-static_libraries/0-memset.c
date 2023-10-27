#include "main.h"

/**
  * *_memset - fills the memory of a constant byte
  *
  * @*s: pointer to the memory area
  *
  * @n: bytes of the memory area to be filled
  *
  * @b: Constant byte to be used to fill memory area
  *
  * @s: memory area to return pointer to
  *
  * Return: s
  */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}

	return (s);
}
