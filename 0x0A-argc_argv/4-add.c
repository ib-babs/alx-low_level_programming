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
	int i = 0, sum = 0;

	if (argc > 1)
	{
		while (i < argc)
		{
			if (i > 0)
			{
				if (atoi(argv[i]) != 0)
					sum += atoi(argv[i]);
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			i++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
