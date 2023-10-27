#include "main.h"
#include <stdio.h>

/**
  * main - write a program that prints its name
  *
  * @i =  index for the for loop
  *
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
