#include "main.h"

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		length++;
	}
	return (length);
}
