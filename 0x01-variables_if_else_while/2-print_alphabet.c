#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	char newline = '\n';

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar(newline);
	return (0);
}
