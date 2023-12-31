#include "main.h"

/**
  * _sqrt_recursion - returns the natural square root of a number
  *
  * @n: parameter or argument taken
  *
  * Return: -1 or 1
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return _sqrt_recursion(n, 0, n);
}
