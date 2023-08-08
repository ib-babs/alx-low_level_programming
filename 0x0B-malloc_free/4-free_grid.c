#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Free memory of height
 * @grid: Pointer to 2D array
 * @height: Column size
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(height * sizeof(int *));
		free(grid[i]);
	}
}
