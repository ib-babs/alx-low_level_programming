#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Void pointer to memory
 * @b: Integer value
 * Return: Void pointer to any data type
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(sizeof(ptr) * b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
