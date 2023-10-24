#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
  * print_chessboard - write a function that prints the chessboard
  *
  * @a: pointer to the array
  *
  * Return: void
  */

void print_chessboard(char (*a)[8])
{
	int c, b = 0;

	while (c < 8)
	{
		b = 0;
		{
			while (b < 8)
			{
				_putchar(a[c][b]);
				b++;
			}
			_putchar('\n');
		}
		c++;
	}
}
