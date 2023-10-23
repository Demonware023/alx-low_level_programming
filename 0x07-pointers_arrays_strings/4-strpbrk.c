#include "main.h"
#include <string.h>
#include <stddef.h>

/**
  * *_strpbrk - searches a sting for any of a set of bytes
  *
  * @s: string
  *
  * @accept: bytes to be searched
  *
  * Return: accept or NULL
  */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *ptr = accept;

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
