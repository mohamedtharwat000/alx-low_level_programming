#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees dogs.
 * @d: pointer to dog structure
 */

void free_dog(dog_t *d)
{
	if (!d)
	{
		return;
	}

	free(d);
}
