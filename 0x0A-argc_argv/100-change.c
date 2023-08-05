#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector [One dimensional array]
 * Return: 0
 */
int main(int argc, char **argv)
{
	int change = atoi(argv[1]), i;

	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	if (change > 0)
	{
		for (i = 0; change > 0; i++)
		{
			if (change - 25 >= 0)
				change = change - 25;
			else if (change - 10 >= 0)
				change = change - 10;
			else if (change - 5 >= 0)
				change = change - 5;
			else if (change - 2 >= 0)
				change = change - 2;
			else if (change - 1 >= 0)
				change = change - 1;
		}
		printf("%d\n", i);
	}
	else
		printf("0\n");
	return (0);
}
