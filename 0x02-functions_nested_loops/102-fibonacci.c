#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int t1, t2, i, sum;

	t1 = 0;

	t2 = 1;

	sum = t1 + t2;

	for (i = 0; i <= 50; i++)
	{
		t1 = t2;

		t2 = sum;

		sum = t1 + t2;
		printf("%d", t2);
		if (i != 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
