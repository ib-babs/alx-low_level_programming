#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * cap_string - Main entry pointer for modified array
 * @s: String to manipulate
 * Return: Title case string
 */
char *cap_string(char *s)
{
	int len = strlen(s), i, temp;

	for (i = 0; i <= len; i++)
	{
		if (isspace(s[i]) || ispunct(s[i]))
		{
			temp = i + 1;
			s[temp] = toupper(s[temp]);
		}
		if (!isupper(s[0]))
			s[0] = toupper(s[0]);
	}
		return (s);
}
