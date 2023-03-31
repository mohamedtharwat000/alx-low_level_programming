#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @str: input string.
 * Return: encoded string
 */

char *leet(char *str)
{
	int i, j;
	char arr1[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char arr2[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == arr1[j])
			{
				str[i] = arr2[j];
			}
		}

	}

	return (str);
}
