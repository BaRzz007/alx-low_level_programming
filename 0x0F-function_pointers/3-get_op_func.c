#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - Gets the correct function to be used
 * for the operation
 * @s: operator
 * Return: pointer to the correct op_func
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
	while (i < 6)
	{
		if (*s == ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}