#include "function_pointers.h"
/**
 * int_index - Function that searches \
 * for the existence of an element in an array
 * @array: An Array of element
 * @size: The size of the element in the array
 * @cmp: A function pointer that compares \
 * the existence of the element
 * Return: Index of the searched element if exist. \
 * Return -1 if the element if not exist
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
