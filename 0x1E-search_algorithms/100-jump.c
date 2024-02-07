#include "search_algos.h"

/**
 * print_array - Print array of number
 * @array: is a pointer to the first element of the array to search in
 * @prev: Prev number
 * Return: Void
 */
void print_array(int *array, int prev)
{
	printf("Value checked array[%d] = [%d]\n", array[prev], prev);
}

/**
 * print_found - Print found number
 * @array: is a pointer to the first element of the array to search in
 * @prev: Prev number
 * @step: Next number by step of sqrt(size)
 * @size: Size of array
 * Return: Void
 */
void print_found(int *array, int prev, int step, size_t size)
{
	size_t i;

	if (prev - (int)sqrt(size) > 0)

		printf("Value found between indexes [%d] and [%d]\n",
			   prev - (int)sqrt(size), step - (int)sqrt(size));
	else if (prev - (int)sqrt(size) < 0)
	{
		print_array(array, prev);
		printf("Value found between indexes [%d] and [%d]\n",
			   prev, step);
	}

	for (i = prev - (int)sqrt(size); i <= prev; i++)
	{
		print_array(array, i);
		if (i == size - 1)
			break;
	}
}
/**
 * jump_search - Searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: size is the number of elements in array
 * @value: the value to search for
 * Return: return the first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	int prev = 0, step = sqrt(size), i;

	if (array == NULL)
		return (-1);

	while (array[(int)fmin(step, size) - 1] < value)
	{
		print_array(array, prev);
		prev = step;
		step = step + sqrt(size);
		if (prev >= (int)size)
		{
			print_found(array, prev, step, size);
			return (-1);
		}
	}

	for (i = prev; i < (int)fmin(step, size); i++)
	{
		print_found(array, i, step, step);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
