#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - Print reverse of input string
 * @s: Character to input
 * Return: void
 */
void print_rev(char *s)
{
	int len = strlen(s), i;

	for (i = 0; i < len; i++)
		printf("%c", s[len - i - 1]);
	putchar('\n');
}
