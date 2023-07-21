#include <stdio.h>
/**
 * print_line - Prints line of specified number
 *
 * @n: Number specified
 *
 * Return: void
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
	for (a = 0; a < n; a++)
		putchar('_');
	}
	putchar('\n');
}
