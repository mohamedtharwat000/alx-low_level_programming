#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: character
 * Return: NULL if size = 0
 * pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;

	arr = malloc(sizeof(c) * size);

	while (i < size)
	{
		if (arr == NULL)
		{
			return (NULL);
		}
		arr[i] = c;
		i++;
	}
	return (arr);
}
