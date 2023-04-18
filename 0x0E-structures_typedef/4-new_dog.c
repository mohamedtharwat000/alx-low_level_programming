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

	if (!dog || !name || !owner || !age || age < 0)
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

	dog->age = age;
	dog->name = malloc(sizeof(char) * namelen);
	dog->name = name;
	dog->name = malloc(sizeof(char) * ownerlen);
	dog->owner = owner;

	return (dog);
}
