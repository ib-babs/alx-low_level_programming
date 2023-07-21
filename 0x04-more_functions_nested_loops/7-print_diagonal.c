#include <stdio.h>
/**
 * print_diagonal - Print diagonal of specified number
 * @n: Specified number of times
 * Return: void
 */
void print_diagonal(int n)
{
	int j, k;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < j; k++)
			{
				if (k > 0)
					putchar(' ');
			}
			putchar('\\');
		}
	}
	putchar('\n');
}
