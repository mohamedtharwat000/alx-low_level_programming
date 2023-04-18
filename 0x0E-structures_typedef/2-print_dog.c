#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: dog
 */

void print_dog(struct dog *d)
{

	if (!d)
	{
		return;
	}

	if ((*d).name)
	{
		printf("Namee: %s\n", (*d).name);
	}
	else
	{
		printf("Name: (nil)\n");
	}

	printf("Age: %f\n", (*d).age);

	if ((*d).owner)
	{
		printf("Owner: %s\n", (*d).owner);
	}
	else
	{
		printf("Owner: (nil)\n");
	}
}
