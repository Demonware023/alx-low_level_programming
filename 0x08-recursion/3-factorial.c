#include "main.h"

/**
  * factorial - Returns the factorial of a given number
  *
  * @n: parameter/given number
  *
  * Return: -1 or 0 Always success
  */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
