#include "main.h"
#include <stddef.h>

/**
  * *_strchr - locates a character in a string
  *
  * @s: string
  *
  * @c: character to be located
  *
  * Return: s or null
  */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
		return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}
	else
		return (NULL);
}

