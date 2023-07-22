#include <stdio.h>
/**
 * print_triangle - prints triangle shape
 *
 * @size: size specified
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			for (j = i; j > 0; j--)
			{
				if (j > 1)
				putchar(' ');
			}

			for (k = 0; k <= (size - i); k++)
				putchar('#');
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
