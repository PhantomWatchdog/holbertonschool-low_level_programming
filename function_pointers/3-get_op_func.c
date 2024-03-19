#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Select the operator for calcul.
 * @s: The operator.
 * Return:
 * The operator to function associated (f).
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

	int index = 0;

	while (ops[index].op)
		index++;

	if (*ops[index].op != *s)
	{
		return (NULL);
	}

	return (ops[index].f);
}
