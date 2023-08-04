#include <stdio.h>
/**
 * _print_rev_recursion - Function to reverse string
 * @s: String to reverse
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
