#include <string.h>
/**
 * _strstr - Main pointer function
 * @haystack: Array of string to test
 * @needle: String accepted
 * Return: Substring of string S
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
