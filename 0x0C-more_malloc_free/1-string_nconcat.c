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
	int i, s1len = 0, s2len = 0;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; *(s1 + i); i++)
	{
		s1len++;
	}
	for (i = 0; *(s2 + i); i++)
	{
		s2len++;
	}
	if (n > s2len)
	{
		n = s2len;
	}
	str = malloc(s1len + n);
	if (!str)
	{
		return (NULL);
	}
	for (i = 0; i < s1len; i++)
	{
		str[i] = s1[i];
	}
	for (; i < s1len + n; i++)
	{
		str[i] = s2[(n + i) - (s1len + n)];
	}
	str[i + 1] = '\0';
	return (str);
}
