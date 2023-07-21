#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 1; n < 101; n++)
	{
		if ((n > 1) && (n != 101))
			printf(" ");

		if ((n % 3 == 0) && !(n % 5 == 0))
		{
			printf("Fizz");
			continue;
		}
		else if ((n % 5 == 0) && !(n % 3 == 0))
		{
			printf("Buzz");
			continue;
		}
		else if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
			continue;
		}
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
