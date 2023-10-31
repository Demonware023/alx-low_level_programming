#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  * *str_concat - a function that concatenates two strings using malloc
  *
  * @s1: string 1
  *
  * @s2: string 2
  *
  * Return: NULL or Success
  */

char *str_concat(char *s1, char *s2)
{
	char *ptrStr;
	size_t len1;
	size_t len2;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	ptrStr = malloc(len1 + len2 + 1);

	if (ptrStr == NULL)
	{
		return (NULL);
	}

	strcpy(ptrStr, s1);
	strcat(ptrStr, s2);

	return (ptrStr);
	free(ptrStr);
}
