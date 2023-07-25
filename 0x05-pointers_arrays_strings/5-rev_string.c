#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * rev_string - Reverse array of string
 * @s: Pointer to the array
 * Return: Void
 */
void rev_string(char *s)
{
	int rv = strlen(s), temp, i;

	for (i = 0; i < (rv / 2); i++)
	{
		temp = s[i];
		s[i] = s[rv - i - 1];
		s[rv - i - 1] = temp;
	}
}
