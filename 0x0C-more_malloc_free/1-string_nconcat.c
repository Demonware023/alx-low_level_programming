#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * *string_nconcat - write a function that concatenates two strings
  *
  * @s1 - first string
  *
  * @s2 - string
  *
  * @n - n bytes of string 2
  *
  * Return: NULL or ptr
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptrNew_string;
	unsigned int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}

	if (n >= len2)
	{
		n = len2;
	}

	ptrNew_string = malloc(sizeof(char) * (len1 + n + 1));
	if (ptrNew_string == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < len1 ; i++)
	{
		ptrNew_string[i] = s1[i];
	}
	for (j = 0 ; j < n ; j++)
	{
		ptrNew_string[i] = s2[j];
	}

	ptrNew_string[i] = '\0';

	return (ptrNew_string);
	free(ptrNew_string);
}
