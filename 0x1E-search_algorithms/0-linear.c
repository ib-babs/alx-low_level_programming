#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * @array:  is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value:  is the value to search for
 * Return: first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0;

	if (array == NULL)
		return (-1);

	while (idx < size)
	{
		if (array[idx] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
			return (idx);
		}
		else
			printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		idx++;
	}
	return (-1);
}
