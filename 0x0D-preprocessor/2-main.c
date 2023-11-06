#include <stdio.h>

/**
  * main - prints the name of the file it was compiled from
  *
  * Return: 0 or __FILE__
  */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
