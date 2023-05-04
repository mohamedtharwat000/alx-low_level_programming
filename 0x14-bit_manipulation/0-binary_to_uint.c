#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 *
 * @b: string of 0 and 1 chars.
 * Return: the converted number
 * or 0 if
 *         there is one or more chars in the string b that is not 0 or 1
 *         b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, result = 0, power = 1;
	int i = 0;

	if (!b)
	{
		return (0);
	}

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		result += (b[i] - '0') * power;
		power *= 2;
	}

	return (result);
}
