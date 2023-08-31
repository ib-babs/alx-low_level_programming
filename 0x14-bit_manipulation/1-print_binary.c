#include "main.h"
/**
 * _pow2 - Power
 * @base: Base
 * @n: Number
 * Return: Power of number
 */
unsigned long int _pow2(unsigned int base, unsigned int n)
{

	unsigned long int p;

	if (n == 0)
		p = 1;
	else
	{
		p = base;
		while (n > 1)
		{
			/* code */
			p = p * base;
			n--;
		}
	}
	return (p);
}
/**
 * print_binary - As the name implies
 * @n: Number to print
 * Return: Void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, checker;
	char f;

	f = 0;
	divisor = _pow2(2, sizeof(unsigned long int) * 8 - 1);

	while (divisor > 0)
	{
		/* code */
		checker = n & divisor;
		if (checker == divisor)
		{
			f = 1;
			putchar('1');
		}
		else if (f == 1 || divisor == 1)
			putchar('0');
		divisor >>= 1;
	}
}
