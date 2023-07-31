#include <stdio.h>
/**
 * print_diagsums - Print diagona sum
 * @a: Array of numbers
 * @size: Size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, diagsum1 = 0, diagsum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j && !(i > j))
				diagsum1 += a[j - i];
			else if (j > i && !(i == j))
				diagsum2 += a[j - i];
			a++;
		}
	}
	printf("%d, %d\n", diagsum1, diagsum2);
}
