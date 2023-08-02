#include "main.h"
/**
 * sqrt_check - Function that check sqrt
 * @g: Multiplier
 * @c: By
 * Return: Recursive sqrt checker
 */
int sqrt_check(int g, int c)
{
	if (g * g == c)
		return (g);
	if (g * g > c)
		return (-1);
	return (sqrt_check(g + 1, c));
}
/**
 * _sqrt_recursion - Test the recursion
 * @n: number to test with
 * Return: Square root of number
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else
		return (sqrt_check(1, n));
}
