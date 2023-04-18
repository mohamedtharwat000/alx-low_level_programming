#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: dog
 * @name: name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	dog dog;

	if (d == NULL)
	{
		d = &dog;
	}
	
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
