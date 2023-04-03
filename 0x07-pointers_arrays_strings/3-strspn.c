#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string s
 * @accept: The prefix to be measured.
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{

	int i, j, number = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				number++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
			{
				return (number);
			}
		}
	}
	return (number);
}
