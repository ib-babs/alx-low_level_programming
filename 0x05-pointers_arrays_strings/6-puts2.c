#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts2 - Return odd character
 * @str: Pointer to the string
 * Return - void
 */
void puts2(char *str)
{
	int len = strlen(str) - 1, i;

	for (i = 0; i <= len; i++)
	{
		if (i % 2 == 1)
			continue;
		printf("%c", str[i]);
	}
	putchar('\n');
}
