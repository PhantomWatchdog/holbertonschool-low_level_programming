#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free dog.
 * @d: Pointer to dog_t.
 *Return:
 *
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	
	free(d->owner);
	free(d->name);
	free(d);
}