#include "main.h"
#include <ctype.h>

/**
 * _islower - Entry point
 *
 * @c:  Character to test
 *
 * Return: Always 0 (Success)
 */
int _islower(char c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
