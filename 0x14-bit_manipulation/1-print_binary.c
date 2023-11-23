#include "main.h"

/**
 * print_binary - equivalent of a decimal number that prints a binary
 * @n: the amount or number binary to be printed
 */

void print_binary(unsigned long int n)
{
	int pan, jambo = 0;
	unsigned long int new;

	for (pan = 63; pan >= 0; pan--)
	{
		new = n >> pan;
		if (new & 1)
		{
			_putchar('1');
			jambo++;
		}
		else if (new)
			_putchar('0');
	}
	if (!new)
		_putchar('0');
}
