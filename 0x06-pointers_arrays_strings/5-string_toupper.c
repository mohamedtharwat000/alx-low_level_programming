#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: array.
 * @n: n is the number of elements of the array.
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
