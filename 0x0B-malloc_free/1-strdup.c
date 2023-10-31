#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * *_strdup - rteurns a pointer to a new space & copies string parameter
  *
  * @str: string to be duplicated
  *
  * Return: NULL or Success
  */

char *_strdup(char *str)
{
	char *ptrStr;
	int str_len = 0;
	int count;

	while (str[str_len] !=  '\0')
	{
		str_len++;
	}

	ptrStr = malloc(str_len * sizeof(char) + 1);

	if (ptrStr == NULL)
	{
		return (NULL);
	}

	for (count = 0 ; str[count] != '\0' ; count++)
	{
		ptrStr[count] = str[count];
	}

	ptrStr[count] = '\0';

	return (ptrStr);
	free(ptrStr);
}
