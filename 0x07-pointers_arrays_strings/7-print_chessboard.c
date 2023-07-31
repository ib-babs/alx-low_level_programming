#include <stdio.h>
/**
 * print_chessboard - Main entry
 * @a: Array of two dimensional
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			printf("%c", *(*a + j));
		*a++;
		printf("\n");
	}
}
