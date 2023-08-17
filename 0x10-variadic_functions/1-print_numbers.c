#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Function that printf Numbers
 * @separator: String that separate the numbers
 * @n: Size of the arguments
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, j;

	va_start(args, n);
	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(args, int));

		i = 0;
		if (separator != NULL)
			while (separator[i] != '\0')
			{
				if (j < (n - 1))
					printf("%c", separator[i]);
				i++;
			}
	}
	va_end(args);
	putchar('\n');
}
