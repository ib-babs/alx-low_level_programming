#include <sring.h>
/**
 * _strspn - Main pointer function
 * @s: Array of string to test
 * @accept: String accepted
 * Return: Manipulated string
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
