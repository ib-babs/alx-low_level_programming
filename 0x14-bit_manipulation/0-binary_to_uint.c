#include "main.h"
/**
* _pow - Power
* @base: Base
* @n: Number
* Return: Power of number
*/
int _pow(int base, int n)
{
	int p;

	if (n == 0)
		p = 1;
	else
	{
		p = base;
		while (n > 1)
		{
			p = p * base;
			n--;
		}
	}
	return (p);
}

/**
* binary_to_uint - Conversion from bin to int
* @b: Binary in string
* Return: Binary in decimal, 0 otherwise
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int length = strlen(b) - 1;

	if (b == NULL)
		return (0);
	while (length >= 0)
	{
		if (*b != 48 && *b != 49)
			return (0);
		sum += _pow(2, length) * (*b++ - '0');
		length--;
	}
	return (sum);
}
