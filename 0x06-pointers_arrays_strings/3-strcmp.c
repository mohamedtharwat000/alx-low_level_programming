#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: string 1.
 * @s2: string 2.
 * Return: 0 if two are equal.
 * + if 1 > 2
 * - if 2 > 1
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int result = 0;

	for (i = 0; s1[i] || s2[i]; i++)
	{
		if (s1[i] < s2[i])
		{
			result++;
		}
		else if (s1[i] > s2[i])
		{
			result--;
		}
		else
		{
			result = result;
		}
	}


	return (result);
}
