#include <stdio.h>
/**
 * print_diagsums - Print diagona sum
 * @a: Array of numbers
 * @size: Size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int j, diagsum1 = 0, diagsum2 = 0;

	for (j = 0; j < size; j++)
	{
		diagsum1 += a[(size * j) + j];
		diagsum2 += a[size * (j + 1) - (j + 1)];
	}
	printf("%d, %d\n", diagsum1, diagsum2);
}
