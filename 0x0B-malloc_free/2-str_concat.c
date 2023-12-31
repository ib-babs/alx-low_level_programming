#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - Function pointer
 * @s1: String 1
 * @s2: String 2
 * Return: Pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;

	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ptr = malloc(strlen(s1) + strlen(s2) + 1);

	if (ptr == NULL)
		return (NULL);

	while (s1[i] != '\0' && (ptr[i] = s1[i]))
		i++;

	while (s2[j] != '\0' && (ptr[j + i] = s2[j]))
		j++;

	return (ptr);
	free(ptr);
}
