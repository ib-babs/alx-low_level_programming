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
	char *ptr;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	ptr = strcat(s1, s2);

	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
