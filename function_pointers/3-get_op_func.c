#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: operator passed as argument to the program
 *
 * Description: This function returns a pointer to the function that
 * corresponds to the operator given as a parameter.
 *
 * Return: pointer to the function that corresponds to the operator
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
	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
