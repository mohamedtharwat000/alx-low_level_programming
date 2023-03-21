#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character.
 * @c :input
 * Return: 1 if c is a letter, lowercase or uppercase
 * Returns: 0 otherwise
*/


int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
