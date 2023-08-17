#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Void fucntion that print string
 * @separator: String separator
 * @n: Number of arguments
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, j;

	va_start(args, n);
	for (j = 0; j < n; j++)
	{
		int *str_as_int = va_arg(args, int *);

		if (str_as_int != 0)
			printf("%s", (char *) str_as_int);
		else
			printf("(nil)");
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

