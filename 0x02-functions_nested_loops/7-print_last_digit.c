#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - Entry point
 *
 * @n:  Number to test
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = abs(n) % 10;
	_putchar((n % 10) + '0');
	return (n % 10);
}
