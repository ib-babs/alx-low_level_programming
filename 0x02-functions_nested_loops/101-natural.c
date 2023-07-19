#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 * Print: Sum of natural numbers of multiple 3 and 5
 */
int main(void)
{
	int m, sum;

	sum = 0;

	for (m = 1; m < 1024; m++)
	{
		if ((m % 3 == 0) || (m % 5 == 0))
		{
			sum += m;
		}
	}
	printf("%d\n", sum);
}
