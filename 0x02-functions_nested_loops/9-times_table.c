#include "main.h"
#include <stdio.h>

/**
 * times_table -Entry point
 *
 * Return: multiplication table of 9
 */
void times_table(void)
{
	int m = 0;

	while (m < 1)
	{
		int n = 0;

		while (n < 1)
		{
			int p = 0;

			while (p <= 9)
			{
				int q = 0;

				while (q <= 9)
				{
					printf("%2d",  p * q);
					if ((q !=  9))
					{
						printf(",");
						printf(" ");
					}
					q++;
				}
				printf("\n");
				p++;
			}
			n++;
		}
		m++;
	}
}
