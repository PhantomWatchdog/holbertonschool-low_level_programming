#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Initialization of structure dog.
 * @d: Pointer to structure dog.
 *
 * Return:.
 */

void print_dog(struct dog *d)
{
	if (d->age < 0)
	{
		printf("Age: (nil)\n");
	}

	/* Check if alloc ram valid */
	if (d != NULL)
	{
		/* Print holders value */
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Name: (nil)\n");
		printf("Age: (nil)\n");
		printf("Owner: (nil)\n");
	}

}
