#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_grid - frees a 2 dimen. grid from the 2 dimen. array of integers
  *
  * @grid: pointer to pointer of memorr location grid
  *
  * @height: height of the two dimensional array
  *
  * Return: NULL or grid
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
