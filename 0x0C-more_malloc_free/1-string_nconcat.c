#include <stdlib.h>
#include "main.h"
/**
 * str_nconcat - Pointer to array of string
 * @s1: String 1
 * @s2: String 2
 * @n: Number of character(s) to copy from string 2 to s1
 * Return: Concatenated string based on @n
 */
char *str_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0;

	char *ptr = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ptr = calloc(sizeof(s1) + n, sizeof(char *));

	if (ptr == NULL)
		return (NULL);

	while (s1[i] != '\0' && (ptr[i] = s1[i]))
		i++;

	while (j < n && (ptr[i + j] = s2[j]))
		j++;

	return (ptr);
}
