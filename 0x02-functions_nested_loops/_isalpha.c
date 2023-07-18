#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Entry point
 *
 * @c:  Character to test
 *
 * Return: Always 0 (Success)
 */
int _isalpha(char c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
