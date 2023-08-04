#include <string.h>
/**
 * _strpbrk - Main pointer function
 * @s: Array of string to test
 * @accept: String accepted
 * Return: Substring of s
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
