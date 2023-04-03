#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: string haystack
 * @needle: substring needle
 * The _strstr() function finds the first occurrence of the substring needle
 * in the string haystack. The terminating null bytes (\0) are not compared
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, counter = 0, needlelen = 0;

	for (i = 0; needle[i] != '\0'; i++)
	{
		needlelen = i + 1;
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] == needle[j])
				{
					counter++;
				}
				if (counter == needlelen)
				{
					return (&haystack[i]);
				}
			}
		}
	}
	return ('\0');
}
