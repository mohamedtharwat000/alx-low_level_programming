#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @str: input string.
 * Return: capitalize string
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (
			(i == 0 || str[i - 1] == ' '
			|| str[i - 1] == '\t' || str[i - 1] == '\n'
			|| str[i - 1] == ',' || str[i - 1] == ';'
			|| str[i - 1] == '.' || str[i - 1] == '!'
			|| str[i - 1] == '?' || str[i - 1] == '"'
			|| str[i - 1] == '(' || str[i - 1] == ')'
			|| str[i - 1] == '{' || str[i - 1] == '}')
			&& str[i] >= 97 && str[i] <= 122
			)
		{
			str[i] = str[i] - 32;
		}

	}
	return (str);
}
