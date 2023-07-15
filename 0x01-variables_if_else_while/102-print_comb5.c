#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int i;
	int j;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 8; b++)
		{
			for (i = 0; i <= 9; i++)
			{
				for (j = 1; j <= 9; j++)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(i + '0');
					putchar(j + '0');
					if ((a != 9) || (b != 8) || ((i != 9) || (j != 9)))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
