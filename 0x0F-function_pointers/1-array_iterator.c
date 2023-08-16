#include "function_pointers.h"
/**
 * array_iterator - Entry Function
 * @array: Array of integer elements
 * @size: Size of the array
 * @action: Pointer to the function!
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && size != 0 && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
