#include <stdlib.h>
#include "main.h"
/**
 * create_array - Main entry
 * @size: Size of the array
 * @c: Character to add to array
 * Return: Pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0 || ptr == NULL)
		return (NULL);
	ptr = malloc(size);

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
	free(ptr);
}
