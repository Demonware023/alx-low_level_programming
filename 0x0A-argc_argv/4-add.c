#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - write a program that adds positive numbers
  *
  * @argc: argument count
  *
  * @argv: argument vector
  *
  * Return: 1 or 0 Always Success
  */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j = 1;

	if (argc < 1)
	{
		printf("0\n");
	}

	for (i = 1 ; i < argc ; i++)
	{
		char *arg = argv[i];

		while (arg[j] != '\0')
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		sum += atoi(arg);
	}

	printf("%d\n", sum);

	return (0);
}
