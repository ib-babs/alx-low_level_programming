#include "main.h"
#include <stdlib.h>
/**
 * array_range - Pointer to integer array
 * @min: Minimum element
 * @max: Maximum Element
 * Return: Pointer to the first array element
 */
int *array_range(int min, int max)
{
	int *ptr = NULL;

	ptr = malloc(min * sizeof(int *));

	if (min > max && ptr == NULL)
		return (NULL);
	while (min <= max)
	{
		ptr = realloc(ptr, max * sizeof(int *));

		if (ptr == NULL)
			return (NULL);
		ptr[min] = min;
		min++;
	}
	return (ptr);
}
