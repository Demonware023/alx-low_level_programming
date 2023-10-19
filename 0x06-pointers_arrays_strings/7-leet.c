#include "main.h"

/**
 * *leet - function encodes a string into 1337
 * @n: pointer
 * Return: value of n
 */

char *leet(char *n)
{
	int a, b;
	char s1[10] = "aAeEoOtTlL";
	char s2[10] = "4433007711";

	for (a = 0 ; n[a] != '\0' ; a++)
	{
		for (b = 0 ; b < 10 ; b++)
		{
			if (n[a] == s1[b])
			{
				n[a] = s2[b];
			}
		}
	}
	return (n);
}
