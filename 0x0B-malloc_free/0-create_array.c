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

	if (size == 0)
		return (NULL);
	ptr = malloc(size);
	*ptr = c;

	if (ptr == NULL)
		return (NULL);
	else
		return (ptr);
}
