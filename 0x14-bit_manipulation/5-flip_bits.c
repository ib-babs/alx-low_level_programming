#include "main.h"
/**
 * flip_bits - Flip the bit
 * @n: Number
 * @m: Mem
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int c, exc = n ^ m;

	for (i = 63; i >= 0; i++)
	{
		c = exc >> i;
		if (c & 1)
			c++;
	}
	return (c);
}
