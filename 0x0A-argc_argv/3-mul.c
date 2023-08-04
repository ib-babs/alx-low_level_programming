#include <stdio.h>
/**
 * main - Entry point
 * @argc: Arg count
 * @argv: Arg vector
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i = 0, product = 1;

	if (argc >= 2)
	{
		while (i < argc)
		{
			if (i > 0)
			product *= atoi(argv[i]);
			i++;
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", product);
	return (0);
}
