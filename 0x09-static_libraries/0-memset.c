#include <string.h>
/**
 * _memset - Entry point
 * @b: constant character
 * @s: String pointer
 * @n: Number of memory to set
 * Return: swapped memory
*/
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
