#include "main.h"
#include <stdio.h>

/**
 * times_table -Entry point
 *
 * Return: multiplication table of 9
 */

void times_table(void)
{
	int m, n, prod;

	for (m = 0; m <= 9; m++)
	{
		_putchar('0');
		for (n = 1; n <= 9; n++)
		{
			_putchar(',');
			_putchar(' ');
			prod = m * n;

			if (prod <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((prod / 10) + '0');
			}
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
