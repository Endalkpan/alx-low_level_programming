#include "main.h"
#include <string.h>

/**
 * _strncat - a function that concatenates two strings.
 * @dest: input value
 * @n: input value
 * @src: input value
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	/*find size of dest array*/
	while (dest[c])
		c++;

	/**
	 * src does not need to be null terminated
	 * if it contains n or more bytes
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	/*null terminated dest*/
	dest[c + i] = '\0';

	return (dest);
}
