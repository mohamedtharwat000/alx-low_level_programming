#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns
 * a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: size of the array
 * Return: a pointer to a new string which is a duplicate of the string str.
 * Memory for the new string is obtained with malloc,
 * and can be freed with free.
 * Returns NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *strcopy;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		len++;
	}

	strcopy = malloc(sizeof(char) * (len + 1));

	if (strcopy == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		strcopy[i] = str[i];
	}

	strcopy[len] = '\0';

	return (strcopy);
}
