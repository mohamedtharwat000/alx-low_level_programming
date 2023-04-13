#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: str 1
 * @s2: str 2
 * @n: first n bytes of s2
 * Return: pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2,
 * and null terminated
 * If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len = n;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; *(s1 + i); i++)
	{
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));

	if (!str)
	{
		return (NULL);
	}

	len = 0;

	for (i = 0; *(s1 + i); i++)
	{
		str[len++] = s1[i];
	}

	for (i = 0; *(s2 + i) && i < n; i++)
	{
		str[len++] = s2[i];
	}

	str[len] = '\0';
	return (str);
}
