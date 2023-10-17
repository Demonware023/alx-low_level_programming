#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be counted
 * Return: 0
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[1] != '\0' ; i++)
		count++;
	return (count);
}
