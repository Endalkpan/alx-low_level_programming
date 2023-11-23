#include "main.h"
/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @c: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *c)
{
	int a;
	unsigned int num;

	num = 0;
	if (!c)
		return (0);
	for (a = 0; c[a] != '\0'; a++)
	{
		if (c[a] != '0' && c[a] != '1')
			return (0);
	}
	for (a = 0; c[a] != '\0'; a++)
	{
		num <<= 1;
		if (c[a] == '1')
			num += 1;
	}
	return (num);
}
