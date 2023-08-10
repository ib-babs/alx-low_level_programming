#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Alway 0 (Success)
 */
int main(int argc, char **argv)
{
	int i = 0, product = 1;

	if (argc > 1)
	{
		while (i < argc)
		{
			if (i > 0)
			{
				if (atoi(argv[i]) != 0)
					product *= atoi(argv[i]);
				else
				{
					printf("Error\n");
					exit(98);
				}
			}
			i++;
		}
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
