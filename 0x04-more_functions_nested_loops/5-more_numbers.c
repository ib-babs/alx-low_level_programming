#include <stdio.h>
/**
 * more_numbers - Print numbers of 10 lines from 1 - 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int j;

		for (j = 0; j < 15; j++)
		{
			putchar(j % 10 + '0');
			if ((j >= 9) && (j != 14))
				putchar('1');
		}
		putchar('\n');
	}
}
