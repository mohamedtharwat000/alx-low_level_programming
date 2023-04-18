#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int namelen = 0, ownerlen = 0;
	dog_t *dog;

	dog = malloc(sizeof(*dog));

	if (!dog || !name || !owner || age < 0)
	{
		return (NULL);
	}

	while (*name)
	{
		namelen++;
		name++;
	}

	while (*owner)
	{
		ownerlen++;
		owner++;
	}

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
