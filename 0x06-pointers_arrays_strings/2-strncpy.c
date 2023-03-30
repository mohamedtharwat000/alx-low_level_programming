#include "main.h"

/**
 * _strncpy -function that copies a string.
 * @dest: dest string.
 * @src: src string.
 * @n: at most n bytes from src.
 * Return: pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, srclen;

	for (i = 0; src[i]; i++)
	{
		srclen = i + 1;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}

	if (srclen < n)
	{
		for (; i < n; i++)
		{
			dest[i] = '\0';
		}

	}


	return (dest);
}
