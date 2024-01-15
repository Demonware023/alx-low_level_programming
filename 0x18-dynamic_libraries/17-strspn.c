#include "main.h"

/**
 * _strspn - Calculates the length of the initial segment of s consisting
 *            entirely of characters from accept.
 * @s: The string to be searched
 * @accept: The set of characters to search for
 *
 * Return: The length of the initial segment of s consisting entirely
 *         of characters from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a;

	/* For each character in 's'*/
	for (; *s != '\0' ; s++)
	{
		a = accept;
		/* For each character in 'accept'*/
		for (; *a != '\0' ; a++)
		{
			if (*s == *a)
			{
				break;
			}
		}
		/* If we didn't find the character in 'accept', stop-*/
		/* -counting*/
		if (*a == '\0')
		{
			break;
		}

		count++;
	}

	return (count);
}
