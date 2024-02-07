#include "search_algos.h"

/**
 * print_array - Print array of number
 * @array: is a pointer to the first element of the array to search in
 * @mid: Middle number
 * @size:  is the number of elements in array
 * Return: Void
 */
void print_array(int *array, size_t mid, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = mid; i <= size; i++)
	{
		if (i <= size && i > mid)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array:  is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value:  is the value to search for
 * Return: return the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = size - 1, m;

	while (l <= r)
	{
		print_array(array, l, r);
		m = (l + r) / 2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}
