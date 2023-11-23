#include <stdio.h>

/**
  * binary_to_uint - Write a function that converts a binary number-
  * -to an unsigned int.
  *
  * @b: points to a sting of 0 and 1 chars.
  *
  * Return: the converted number or 0 if there is one or more chars-
  * in the string b that is not 0 or 1, if b is NULL.
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)/* Return 0 if b string is NULL */
	{
		return (0);
	}

	/* Transverses through the string */
	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
			/* if 0 or 1 is found the result is updated */
			/* by left shifting its current value by 1 bit */
			/* and adds the value of the current binary digit*/
			/* subtraction of 0 is used to convert the char */
			/* 0 or 1 to the corresponding integer value */
			result = (result << 1) + (*b - '0');
		}
		else/* if theres an invalid character in the string */
		{
			return (0);
		}
		b++;/* increments the loop to the next character */
	}

	return (result);
}
