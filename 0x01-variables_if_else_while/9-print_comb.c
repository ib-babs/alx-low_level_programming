#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 5; a++)
	{
		putchar(a + '0');
		putchar(',');
	}

	for (b = 6; b <= 9; b++)
	{
		putchar(b + '0');
		putchar(',');
	}
	return (0);
}
