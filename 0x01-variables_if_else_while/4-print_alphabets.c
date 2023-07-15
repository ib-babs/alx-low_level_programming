#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase;
	char newline = '\n';
	char uppercase = 'A';

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if ((lowercase == 'e') || (lowercase == 'q'))
		{
			continue;
		}
		putchar(lowercase);
	}
	putchar(newline);
	return (0);
}

