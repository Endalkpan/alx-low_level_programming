#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - selects the function to perform
 * the operation askede by the user
 * @s: the opertator passed as argument
 * Return: a pointer to the function corresponding
 * to the opreator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_Add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
}
