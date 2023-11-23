#include "main.h"
#include <stdio.h>

/**
  * count_set_bits - counts the number of bits in its binary represen.
  *
  * @num: Loop
  *
  * Return: count
  */

unsigned int count_set_bits(unsigned long int num)
{
	unsigned int count = 0;

	/* counts the number of set bits(1s) in its binary representation*/
	/* It uses a while loop that continues as long as num is not 0 */
	/* inside the loop count is incremented by the result of the */
	/* -bitwise AND(num & 1) which checks if the rightmost bit of- */
	/* num is 1. after which num is right shifted by 1 bit */
	/* effectively disregarding the rightmost bit */
	while (num)
	{
		count += num & 1;
		num >>= 1;
	}

	return (count);
}

/**
  * flip_bits - Write a function that returns the number of bits you
  * would need to flip to get from one number to another.
  *
  * @n: numbers to check
  *
  * @m: number to check
  *
  * Return: number of bits.
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;

	/* Xor the two numbers to get the differing bits */
	xor_result = n ^ m;

	/* Count the set bits in the XOR result. */
	return (count_set_bits(xor_result));
}
