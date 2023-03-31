#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters to uppercase.
 * @str: input string.
 * Return: upper casr string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		else
		{
			str[i] = str[i];
		}
	}
	return (str);
}
