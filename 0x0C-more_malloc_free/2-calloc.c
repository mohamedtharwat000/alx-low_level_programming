#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: nmemb elements
 * @size: size bytes
 * Return: pointer to the allocated memory.
 * The _calloc function allocates memory for an array
 * of nmemb elements of size bytes each and returns a pointer
 * to the allocated memory.
 * The memory is set to zero
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *result;
	char *tmp;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	result = malloc(size * nmemb);

	if (result == NULL)
	{
		return (NULL);
	}

	tmp = result;

	for (i = 0; i < (size * nmemb); i++)
	{
		tmp[i] = '\0';
	}

	return (result);
}
