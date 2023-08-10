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
	int *ptr = calloc(min, sizeof(int *));

	if (min > max && ptr == NULL)
		return (NULL);
	while (min <= max)
	{
		ptr[min] = min;
		min++;
	}
	return (ptr);
}
