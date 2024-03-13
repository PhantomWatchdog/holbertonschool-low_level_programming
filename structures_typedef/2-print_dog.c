#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Initialization of structure dog.
 * @d: Pointer to structure elements dog.
 *
 * Return:
 * If d-> X is empty, print (nil).
 * If d-> X have a value, print it.
 */

void print_dog(struct dog *d)
{
	if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("Name: (nil\n");
	}
	if (d->age < 0)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}

	if (d->owner != NULL)
	{
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Owner: (nil)\n");
	}

	if (d == NULL)
	{
		return;
	}
}
