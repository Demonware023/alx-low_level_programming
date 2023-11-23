#include "main.h"
#include <stdio.h>

/**
  * clear_bit - Write a function that sets the value of a bit to 0 at-
  * a given index.
  *
  * @n: number to check.
  *
  * @index: index starting from 0 of the bit you want to set.
  *
  * Return: 1 if it works or -1 if an error occurs.
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	/* create a mask with all bits set to 1 except the bit at- */
	/* the specified index. */
	mask = ~(1UL << index);

	/* clear the bit at the specified index by applying the mask */
	*n = *n & mask;

	return (1);/* Success */
}
