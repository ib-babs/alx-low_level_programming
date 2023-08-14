#include "main.h"
#include <stdlib.h>
/**
 * _realloc -  Main entry
 * @ptr: pointer
 * @old_size: Old size of the array
 * @new_size: New size of the array
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	ptr = malloc(old_size);

	if (old_size == new_size)
		return (ptr);
	if (new_size > old_size)
		ptr = realloc(ptr, new_size);
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
