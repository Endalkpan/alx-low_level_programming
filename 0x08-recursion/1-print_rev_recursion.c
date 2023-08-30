#include "main.h"

/**
 * _print_rev_recursion - print strings in reverse
 * @s: the string to reverse
 * Return: noting
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
