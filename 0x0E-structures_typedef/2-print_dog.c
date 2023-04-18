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
		printf("Name: %s\n", (*d).name);
	}
	else
	{
		printf("Name: nil\n");
	}

	if ((*d).age && (*d).age > 0)
	{
		printf("Age: %d\n", (*d).age);
	}
	else
	{
		printf("Age: nil\n");
	}

	if ((*d).owner)
	{
		printf("Owner: %s\n", (*d).owner);
	}
	else
	{
		printf("Owner: nil\n");
	}
}
