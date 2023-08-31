#include "main.h"
/**
 * get_endianness - Check the endianess
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int x;
	char *y;

	x = 1;
	y = (char *)&x;
	return (*y);
}
