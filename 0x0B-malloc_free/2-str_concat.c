#include <stdlib.h>
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

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	ptr = malloc(sizeof(ptr));

	if (ptr == NULL)
		return (NULL);

<<<<<<< HEAD
	while (s1[i] != '\0' && (ptr[i] = s1[i]))
		i++;

	while (s2[j] != '\0' && (ptr[j + i] = s2[j]))
=======
	while (s1[i] != '\0', ptr[i] = s1[i])
		i++;

	while (s2[j] != '\0', ptr[j + i] = s2[j])
>>>>>>> d741367623d6cce40c39480ea91d326d660f57b5
		j++;

	return (ptr);
	free(ptr);
}
