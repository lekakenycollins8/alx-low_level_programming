#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Function that frees the dogs
 * @d: pointer to dog_t
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			free(d->name);
		}
		if (d->owner != NULL)
		{
			free(d->owner);
		}
		free(d);
	}
}
