#include "main.h"
/**
 * clear_bit - Clears bit
 * @n: Pointer to n
 * @index: Index
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
