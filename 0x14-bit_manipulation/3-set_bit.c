#include "main.h"
/**
 * set_bit - Set bit
 * @n: Pointer to n
 * @index: Index
 * Return: 1 if success, 0 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int s;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	s = 1 << index;
	*n = *n | s;
	return (1);
}
