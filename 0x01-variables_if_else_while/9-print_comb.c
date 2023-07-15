#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
		if (a == 9)
		{
			continue;
			putchar(',');
		}
		putchar(',');
		putchar(' ');
	}
	return (0);
}
