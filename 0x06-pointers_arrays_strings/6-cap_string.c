#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @str: function parameter of the string
 * Return: always 0
 */

char *cap_string(char *str)
{
	int len = 0;

	while (str[len])
	{
		while ((str[len] >= 'a' && str[len] <= 'z'))
			len++;
		if (str[len - 1] == ' ' || str[len - 1] == '\t' || str[len - 1] == '\n' || str[len - 1] == ',' || str[len - 1] == ';' || str[len - 1] == '.' || str[len - 1] == '!' || str[len - 1] == '?' || str[len - 1] == '"' || str[len - 1] == '(' || str[len - 1] == ')' ||str[len - 1] == '{' || str[len - 1] == '}' || len == 0)
		str[len] = -32;
		len++;
	}

	return (str);
}
