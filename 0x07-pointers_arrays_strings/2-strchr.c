#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: string s
 * @c: character c
 * Return: a pointer to the first occurrence
 * of the character c in the string s,
 * or NULL if the character is not found
*/

char *_strchr(char *s, char c)
{
	for (;; ++s)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		if (*s == '\0')
		{
			return (NULL);
		}
	}
}
