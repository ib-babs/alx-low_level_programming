#include "doog.h"
#include <stdlib.h>
/**
 * free_dog - FUNCTION that free memory allocated to the pointer
 * @d: Pointer
 * Return: Void
 */
void free_dog(dog_t *d)
{
	free(d);
}
