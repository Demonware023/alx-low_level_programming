#include "main.h"

/**
 * *_strncat - Concatenates two strings up to n characters from src
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of characters to concatenate from src
 *
 * Return: Pointer to the concatenated string (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int srclen = 0;
	int i;

	/* Caculate the length of dest*/
	while (dest[destlen] != '\0')
	{
		destlen++;
	}
	/* Calculate the lenght of src*/
	while (src[srclen] != '\0')
	{
		srclen++;
	}

	/* Append up to n characters from src to dest*/
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[destlen + i] = src[i];
	}
	dest[destlen + i] = '\0';

	return (dest);
}
