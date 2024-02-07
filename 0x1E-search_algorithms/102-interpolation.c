#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 * Return: Return the first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t high = (size - 1), pos, low = 0;

	if (array == NULL)
		return (-1);
	while (low <= high && (array[low] <= value) && (value <= array[high]))
	{
		if (low == high)
		{
			if (array[low] == value)
				return (low);
			return (-1);
		}
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
					 (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (value == array[pos])
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (low - 1);
}

int main(void)
{
	int array[] = {
		0, 0, 1, 2, 2, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 8, 8, 8, 9, 9};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Found %d at index: %d\n\n", 3, interpolation_search(array, size, 3));
	printf("Found %d at index: %d\n\n", 7, interpolation_search(array, size, 7));
	printf("Found %d at index: %d\n", 999, interpolation_search(array, size, 999));
	return (EXIT_SUCCESS);
}