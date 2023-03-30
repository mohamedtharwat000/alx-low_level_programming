#include "main.h"

/**
 * _strcat -function that concatenates two strings.
 * This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @dest: dest string.
 * @src: src string.
 * Return: pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, destlen;

	for (i = 0; dest[i]; i++)
	{
		destlen = i + 1;
	}

	for (i = 0; src[i]; i++)
	{
		dest[destlen + i] = src[i];
	}
	dest[destlen + i] = src[i];

	return (dest);
}
