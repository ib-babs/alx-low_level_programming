#include "main.h"
/**
 * print_alphabet - print lowercase english alphabet
 *
 * Return: Always 0 (SUccess)
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);
}
