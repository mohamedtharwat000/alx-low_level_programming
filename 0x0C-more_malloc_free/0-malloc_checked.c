#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: size of memory
 * Return: a pointer to the allocated memory
 * if malloc fails, the malloc_checked function should cause
 * normal process termination with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *alloc = malloc(b);

	if (!alloc)
	{
		exit(98);
	}

	return (alloc);
}
