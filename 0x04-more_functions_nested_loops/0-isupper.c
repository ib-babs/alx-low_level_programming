#include <ctype.c>
#include "main.h"
/**
 * _isupper - Entry point
 * @c: Value to be tested
 * Return: Value of c
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
