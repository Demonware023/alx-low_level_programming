#include "main.h"

/**
 * _isupper - checks for uppercase
 * @c: parameter to be checked
 * Return: 1 for success 0 otherwise
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
