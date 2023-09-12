#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("name: %s\n", (d->name) ? d->name : "(nil)");
		printf("age: %s\n", (d->age) ? d->age : "(nil)");
		printf("owner: %s\n", (d->owner) ? d->owner : "(nil)")
	}
}
