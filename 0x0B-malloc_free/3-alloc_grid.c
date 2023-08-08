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

	int **ptr = malloc((width + height) * sizeof(int));

	if (width <= 0 || height <= 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);

	while (k < width && (ptr[k] = (int *)malloc(width * sizeof(int))))
	{
		k++;
	}

	while (i < width)
	{
		while (j < (height * (width + sizeof(int))))
		{
			ptr[i][j] = 0;
			j++;
		}
		i++;
	}

	return (ptr);
	free(ptr);
}
