#include "function_pointers.h"
/**
 * print_name - Function that take pointer to function as one of its argument
 * @name: Argument to be passed to the function pointer
 * @f: Pointer to the function
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f == NULL)
		f(name);
}
