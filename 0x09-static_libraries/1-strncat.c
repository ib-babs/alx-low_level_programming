#include <string.h>
/**
 * _strncat - main entry point
 * @dest: Destination
 * @src: Source
 * @n: Specified number
 * Return: - Concated string by specified number
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
