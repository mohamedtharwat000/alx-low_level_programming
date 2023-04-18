#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - function calculate string length without NULL.
 * @str: the string
 * Return: string length
 */

unsigned int _strlen(char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}

	return (len);
}

/**
 * new_dog - function that creates a new dog.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to new dog
 * Description: You have to store a copy of name and owner
 * Return NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i = 0, namelen = _strlen(name), ownerlen = _strlen(owner);
	dog_t *dog;

	dog = malloc(sizeof(*dog));

	if (!dog || !name || !owner || age < 0)
	{
		return (NULL);
	}

	dog->age = age;
	dog->name = malloc(sizeof(char) * (namelen + 1));
	dog->owner = malloc(sizeof(char) * (ownerlen + 1));

	if (!dog->name || !dog->owner)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	else
	{
		for (i = 0; i < namelen; i++)
		{
			dog->name[i] = name[i];
		}
		dog->name[i] = '\0';

		for (i = 0; i < ownerlen; i++)
		{
			dog->owner[i] = owner[i];
		}
		dog->owner[i] = '\0';
	}

	return (dog);
}
