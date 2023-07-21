#include <stdio.h>
/**
 * print_square - print squre shape
 * @size: size of the shape
 *
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	char c = '#';

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
				putchar(c);
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
