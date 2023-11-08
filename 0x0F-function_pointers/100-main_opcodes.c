#include <stdio.h>
#include <stdlib.h>

/**
  * print_opcodes - a program that prints the opcodes of its own main function
  *
  * @start: start of operating code
  *
  * @num_bytes: number of bytes
  *
  * Return: opcodes
  */

void print_opcodes(char *start, int num_bytes)
{
	int i;

	for (i = 0 ; i < num_bytes ; i++)
	{
		printf("%02x ", (unsigned char)start[i]);
	}
	printf("\n");
}

/**
  * main - main fucntion
  *
  * @argc: argument count
  *
  * @argv: argument vector
  *
  * Return: 1 or 2
  */

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("Error\n");
		exit(1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((char *)main, num_bytes);

	return (0);
}
