#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - Print half of the string if the length of the strng is odd
 * @s: String pointer
 */
void puts_half(char *s)
{
	int len = strlen(s), middle = len / 2, i;

	if (middle % 2 != 0)
		printf("%c", s[middle]);
	else
	{
		for (i = 0; i < middle; i++)
			printf("%c", s[middle + i]);
	}
	putchar('\n');
}
