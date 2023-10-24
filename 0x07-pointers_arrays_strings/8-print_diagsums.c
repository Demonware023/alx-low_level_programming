#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - prints the sum of the two diagonals of a square matrix
  *
  * @a: pointer of the array of the square matrix
  *
  * @primary_sum: the sum of primary diagonal
  *
  * @second_sum: the sum of second diagonal
  *
  * @size: size of the square matrix
  *
  * Return: void
  */

void print_diagsums(int *a, int size)
{
	int i;
	int primary_sum = 0;
	int second_sum = 0;

	for (i = 0 ; i < size ; i++)
	{
		primary_sum += a[i * size + i];
		second_sum += a[i * size + (size - 1 - i)];
	}
	printf("%d\n", primary_sum);
	printf("%d\n", second_sum);
}
