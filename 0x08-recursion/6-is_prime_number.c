#include "main.h"

/**
  * is_prime_number - returns an input integer if its a prime number
  *
  * @n: number to be checked
  *
  * Return: 1 or 0 Always success
  */

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}

	for (i = 3 ; i * i <= n ; i += 2)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}

	return (1);
}
