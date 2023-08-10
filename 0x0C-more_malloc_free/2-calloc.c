#include <stdlib.h>
#include "main.h"
/**
 * _calloc - Pointer to any void data type
 * @nmemb: Number of Members
 * @size: Size of each member's byte
 * Return: Pointer to void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;

	ptr = calloc(nmemb, size);

	if (ptr == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	return (ptr);
}
