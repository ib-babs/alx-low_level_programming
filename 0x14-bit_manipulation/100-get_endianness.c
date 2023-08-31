#include "main.h"
/**
 * get_endianess - Check the endianess
 * Return: 0 or 1
 */
int get_endianess(void)
{
	int x;
	char *y;

	x = 1;
	y = (char *)&x;
	return (*y);
}
