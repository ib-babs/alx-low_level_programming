#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	long long t1 = 0, t2 = 1, sum;

	for (i = 0; i < 50; i++)
	{
		t1 = t2;

		t2 = sum;

		sum = t1 + t2;
		printf("%lld", sum);
		if (i != 49)
		{
			printf(",");
		}
		else
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
