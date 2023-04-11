#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 *
 * @grid: height array
 * @height: width array
 *
 * Return: Pointer
 */
void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(*(grid + k));
	}
	free(grid);
}
