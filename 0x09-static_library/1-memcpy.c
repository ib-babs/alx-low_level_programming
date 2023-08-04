#include <string.h>
/**
 * _memcpy - Pointer to character
 * @dest: destination
 * @src: Source
 * @n: Number of memory to copy
 * Return: memory copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
