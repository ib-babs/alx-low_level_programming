#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - Get the operator and its function
 * @s: String operator
 * Return: Function and the operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].f != NULL)
	{
		if (*s == *(ops[i].op) && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
