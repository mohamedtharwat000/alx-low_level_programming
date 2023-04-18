#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: dog
 */

void print_dog(struct dog *d)
{
	char *name, *owner;

	if (!d)
	{
		return;
	}

	if (!(*d).name || !(*d).owner)
	{
		name = "(nil)";
		owner = "(nil)";
	}

	if ((*d).name)
	{
		name = d->name;
	}

	if ((*d).owner)
	{
		owner = d->owner;
	}

	printf("Name: %s\n", name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", owner);
}
