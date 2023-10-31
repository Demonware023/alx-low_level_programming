#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  * *str_concat - a function that concatenates two strings using malloc
  *
  * @s1 - string 1
  *
  * @s2 - string 2
  *
  * Return: NULL or Success
  */

char *str_concat(char *s1, char *s2)
{
	char *ptrStr;
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int count;
	int str_len = 0;

	for (count = 0 ; count < len2 ; count++)
	{
		s1[len1 + count] = s2[count];
	}

	s1[len1 + len2] = '\0';

	while (s1[str_len] != '\0')
	{
		str_len++;
	}

	ptrStr = malloc(s1[str_len] * sizeof(char) + 1);

	if (ptrStr == NULL)
	{
		return (NULL);
	}

	return (ptrStr);
	free(ptrStr);
}
