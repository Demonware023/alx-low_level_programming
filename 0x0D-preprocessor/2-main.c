#include <stdio.h>
#include "main.h"

/**
  * main - prints the name of the file it was compiled from
  *
  * Return: 0 or __FILE__
  */

int main()
{
	printf("%s\n", __FILE__);

	return (0);
}
