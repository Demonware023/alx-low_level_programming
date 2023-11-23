#include <stdio.h>
#include "main.h"

/**
  * get_bit - A function that returns the value of a bit at a given index.
  *
  * @n: number to check.
  *
  * @index: index starting from 0 of the bit you want to get to.
  *
  * Return: the value of the bit at index or -1 if an error occurs.
  */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	/* checks if index is within the valid range of bits for the- */
	/* given data type(unsigned long int). returns the size of the- */
	/* data type in bytes and mutiplying by 8 converts it to bit */
	/* if index is greater or equal than total bits in data type- */
	/* it returns -1 to indicate an error */
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	/*this line retrieves the value of the bit at the specified index */
	/* n >> index shifts the bits of n to the right by index positions */
	/* & 1 performs bitwise AND and extracts the rightmost bit after- */
	/* -the shift, effectively isolating the bit at the specified index */
	bit_value = (n >> index) & 1;

	return (bit_value);
}
