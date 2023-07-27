#include <stdio.h>
#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * leet - Letter swapper
 * @s: Strig to manipulate
 * Return: Swapped string
 */
char *leet(char *s)
{
	char arr[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	char replace[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int len_s = strlen(s), i, temp, len_arr, j;

	len_arr = sizeof(arr) / sizeof(char);

	for (i = 0; i <= len_s; i++)
	{
		for (j = 0; j < len_arr; j++)
		{
			if (s[i] == arr[j])
			s[i] = replace[j];
		}
	}
	return (s);
}
