#include <ctype.h>
#include "main.h"
/**
 * _isdigit - Entry point
 * @c: Value to be tested
 * Return: Value of c
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
