#include <stdlib.h>
#include "main.h"

/**
 * str_concat -  function that concatenates two strings.
 * @s1: first str
 * @s2: second str
 * Return: pointer should point to a newly allocated space in memory
 * which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 * if NULL is passed, treat it as an empty string
 * The function should return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j = 0, len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] || s2[i]; i++)
	{
		len++;
	}

	str = malloc(sizeof(char) * len);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		str[j++] = s1[i];
	}

	for (i = 0; s2[i]; i++)
	{
		str[j++] = s2[i];
	}

	return (str);
}
