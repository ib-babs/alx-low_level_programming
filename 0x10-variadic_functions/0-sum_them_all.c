#include <stdarg.h>
#include "variadic_functions.h"
/**
    * sum_them_all - Function that reutrn integer
    * @n: Number of arguments
    * Return: Sum of Integer arguments
    */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	va_start(args, n);
	if (n == 0)
		return (0);

	i = 0;
	while (i < n)
	{
		/* code */
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}
