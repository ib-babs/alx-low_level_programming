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

	if (str == NULL || ptr == NULL)
		return (NULL);
	ptr = strdup(str);
	return (ptr);
}
