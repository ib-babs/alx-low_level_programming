#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * string_toupper - Change string to uppercase
 * @s: String to convert
 * Return: Converted string
 */
char *string_toupper(char *s)
{
	int n, len = strlen(s);

	for (n = 0; n < len; n++)
		s[n] = toupper(s[n]);
	return (s);
}
