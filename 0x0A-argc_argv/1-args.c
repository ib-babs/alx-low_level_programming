#include <stdio.h>
/**
 * main - Entry point
 * @argc: Arg count
 * @argv: Arg vector
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
