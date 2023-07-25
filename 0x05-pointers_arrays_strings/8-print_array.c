#include <stdio.h>
#include "main.h"
/**
 * print_array - Traverse an array elements
 * @a: pointer to array
 * @n: sizeof element in array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i > 0 && i != n)
			printf(", ");
		printf("%d", a[i]);
	}
}
