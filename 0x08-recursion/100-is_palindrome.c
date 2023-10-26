#include "main.h"
#include <string.h>

/**
  * is_palindrome - checks is the string is an empty string
  *
  * @s: string
  *
  * Return: 1 or 0
  */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	if (*s != *(s + strlen(s) - 1))
	{
		return (0);
	}

	return (is_palindrome(s + 1));
}
