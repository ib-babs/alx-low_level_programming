#include <stdio.h>
/**
 * set_string - Main entry function
 * @s: Pointer of pointer to address
 * @to: Set string to this
 * Return: Void
*/
void set_string(char **s, char *to)
{
	*s = to;
}
