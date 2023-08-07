#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Pointer to the array function
 * @str: Array of pointer
 * Return: Duplicat string
 */
char *_strdup(char *str)
{
	char *ptr;
	ptr = strdup(str);

	if (str == NULL || ptr == NULL)
		return (NULL);
	return (ptr);
}
