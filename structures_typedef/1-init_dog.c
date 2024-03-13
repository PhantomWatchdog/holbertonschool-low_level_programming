#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialization of structure dog.
 * @d: Pointer to structure dog.
 * @name: Poppy.
 * @age: 3.5.
 * @owner: Bob.
 *
 * Return:.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Check if alloc ram valid */
	if (d != NULL)
	{
		/* Ptr d to structure holders */
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
