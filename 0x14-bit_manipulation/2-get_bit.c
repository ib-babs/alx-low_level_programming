#include "main.h"
/**
 * get_bit - Get bit
 * @n: Number
 * @index: Index
 * Return: 1 if success, -1 otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, checker;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	checker = n & divisor;
	if (checker == divisor)
		return (1);
	return (0);
}
