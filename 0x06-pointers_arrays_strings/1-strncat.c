#include "main.h"

/**
 * _strncat -function that concatenates two strings.
 * This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * it will use at most n bytes from src; and
src does not need to be null-terminated if it contains n or more bytes
 * and then adds a terminating null byte
 * @dest: dest string.
 * @src: src string.
 * @n: at most n bytes from src.
 * Return: pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, destlen;

	for (i = 0; dest[i]; i++)
	{
		destlen = i + 1;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[destlen + i] = src[i];
	}

	return (dest);
}
