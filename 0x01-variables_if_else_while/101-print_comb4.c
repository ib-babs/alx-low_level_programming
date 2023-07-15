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
				putchar(a + '0');
				putchar(b + '0');
				putchar(i + '0');
				if ((a != 8) || (i != 9))
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
