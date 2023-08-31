#include "main.h"
/**
 * clear_bit - Clears bit
 * @n: Pointer to n
 * @index: Index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8 - 1)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
