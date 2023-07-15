#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char newline = '\n';

	for (n = 0; n <= 9; n++)
	{
	putchar(n + '0');
	}
	putchar(newline);
	return (0);
}

