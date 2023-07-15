#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	char alpha = 'a';

	for (n; n <= 10; n++)
	{
		putchar(n);
	}

	for (alpha; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
