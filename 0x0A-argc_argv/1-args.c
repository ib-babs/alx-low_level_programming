#include <stdio.h>
/**
 * main - Entry point
 * @argc: Arg count
 * @argv: Arg vector
 * Return: 0
*/
int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argc > 1)
		printf("%d\n", argc - 1);
	else
		printf("0\n");
	return (0);
}
