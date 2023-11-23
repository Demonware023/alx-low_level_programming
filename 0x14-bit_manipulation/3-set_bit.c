#include "main.h"
#include <stdio.h>

/**
  * set_bit - Write a function that sets the value of a bit to 1-
  * at a given index.
  *
  * @n: number to check.
  *
  * @index: index starting from 0 of the bit you want to set.
  *
  * Return: 1 if it worked or -1 if an error occured.
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	/* checks if the index is within bounds. it caculates the- */
	/* -maximum number valid index as sizeof(unsign long int) * 8 */
	/*because each byte has 8 bytes. if index is beyond returns -1 for error*/
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	/* this line performs the bit- setting operation. it uses bitwise */
	/* OR operator to set the bit at the specified index to 1. */
	/* (1UL << index) creates a value with only the bit at the- */
	/* specified index set to 1. << shifts the bit 1 to the left */
	/* by the value of index. bitwiseOR then combines this value with */
	/* the original value poined to by n, setting the bit to 1 */
	*n |= (1UL << index);

	return (1);/* Success */
}

