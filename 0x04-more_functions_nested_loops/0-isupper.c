#include "main.h"

/**
 * _isupper -function that checks for uppercase character.
 * @c: the input letter
 * Return: 1 if @c: upper others return o
*/

int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
