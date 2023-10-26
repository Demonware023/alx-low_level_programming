#include "main.h"

/**
  * is_prime_number - returns an input integer if its a prime number
  *
  * @n: number to be checked
  *
  * @prime_number: new function
  *
  * Return: 1 or 0 Always success
  */

int is_prime_number(int n)
{
	int prime_number(int n, int div);

	int div = 2;

	return (prime_number(div, n));
}

int prime_number(int n, int div)
{
	if (n < 2)
	{
		return (0);
	}
	if (n % n == 0 || n % 1 == 0)
	{
		return (0);
	}
	if (prime_number(div, n) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
