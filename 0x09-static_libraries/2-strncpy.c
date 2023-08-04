#include <string.h>
/**
 * _strncpy - Main entry point ffor the array pointer
 * @dest: Destination
 * @src: Source
 * @n: Number specified
 * Return: Altered array; copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
