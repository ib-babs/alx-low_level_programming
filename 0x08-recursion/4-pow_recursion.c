#include <stdio.h>
/**
 * _pow_recursion - Main entry point to calculate base of number
 * @x: base
 * @y: power
 * Return: power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
