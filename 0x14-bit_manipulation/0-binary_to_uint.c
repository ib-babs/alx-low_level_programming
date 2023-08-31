#include "main.h"
/**
* binary_to_uint - Conversion from bin to int
* @b: Binary in string
* Return: Binary in decimal, 0 otherwise
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int length = strlen(b) - 1;

	if (b == NULL)
		return (0);
	while (length >= 0)
	{
		if (*b != 48 && *b != 49)
			return (0);
		sum += (int)pow(2, length) * (*b++ - '0');
		length--;
	}
	return (sum);
}
