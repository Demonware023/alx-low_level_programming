#include "main.h"
#include <stdio.h>

/**
  * get_endianness - Write a function that checks the (endianness) the-
  * order in which bytes are stores in computer memory.
  *
  * Return: 0 if big endian, 1 if little endian.
  */

int get_endianness(void)
{
	/* declare an unsigned int and set value to 1 */
	/* declare a pointer to a character and set it to point to the- */
	/* address of x. this allows us to inspect the individual bytes- */
	/* of the integer. */
	unsigned int x = 1;
	char *c = (char *)&x;

	if (*c == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
