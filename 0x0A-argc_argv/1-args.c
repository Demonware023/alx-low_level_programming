#include "main.h"
#include <stdio.h>

/**
  * main - write a program that prints the number of arguments passed to it
  *
  * @argc: argument count
  *
  * @argv: argument vector
  *
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int i = 0;

	if (i < argc)
	{
		argv++;
		printf("%d\n", argc - 1);
	}

	return (0);
}
