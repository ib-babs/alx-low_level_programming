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

	for (a = 0; a <= 7; a++)
	{
		for (b = 1; b <= 8; b++)
		{
			for (i = 2; i <= 9; i++)
			{
				if ((a == b) || (a > b) || (b == i) || (b > i))
				{
					continue;
				}
				putchar(a + '0');
				putchar(b + '0');
				putchar(i + '0');
				if ((a != 7) || (b != 8) || (i != 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
