#include "main.h"

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	/* Skip leading whitespace characters*/
	while (*s == ' ' || (*s >= '\t' && *s <= '\r'))
	{
		s++;
	}
	/* Check for negative sign; if it's there, adjust the sign*/
	/* -multiplier and start position*/
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	/* Process digits*/
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}

	return (result * sign);
}
