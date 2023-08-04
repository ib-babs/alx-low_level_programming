#include <stdio.h>
/**
 * factorial - Main entry point to calculate factorial of number
 * @n: Specified number
 * Return: Factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
