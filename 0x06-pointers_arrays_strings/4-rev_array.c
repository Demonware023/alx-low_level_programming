#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer
 * @n: number of elements of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int e;
	int s;

	for (e = 0 ; e < n-- ; e++)
	{
		s = a[e];
		a[e] = a[n];
		a[n] = s;
	}
}
