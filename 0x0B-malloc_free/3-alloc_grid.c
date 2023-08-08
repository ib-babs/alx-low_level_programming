#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - Pointer to 2D array
 * @width: Sie of the row
 * @height: Size of the column
 * Return: Pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int i = 0, k = 0;

	unsigned int j = 0;

	int **ptr = malloc(width  * sizeof(int *));

	if (width <= 0 || height <= 0 || ptr == NULL)
		return (NULL);

	while (k < width && (ptr[k] = malloc(height * sizeof(int))))
	{
		k++;
	}

	while (i < width)
	{
		while (j < (width * sizeof(int)))
		{
			ptr[i][j] = 0;
			j++;
		}
		i++;
	}

	return (ptr);
	free(ptr);
}
