#include <stdio.h>
/**
 * reverse_array - Function that modified array
 * @a: Array pointer
 * @n: Number of element in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n; i > 0; i--)
	{
		if (i < n)
			printf(", ");
		printf("%d", a[i - 1]);
	}
	printf("\n");
}
