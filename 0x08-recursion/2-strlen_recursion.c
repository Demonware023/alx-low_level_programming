#include "main.h"

/**
  * _strlen_recursion - Returns the legnth of a string with recursion
  *
  * @s: string
  *
  * Return: 0 Always success
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
