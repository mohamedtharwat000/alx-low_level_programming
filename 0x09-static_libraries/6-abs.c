#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @a :input
 * Return: 1 and prints + if n is greater than zero
 * Return 0 and prints 0 if n is zero
 * Return -1 and prints - if n is less than zero
*/


int _abs(int a)
{
	if (a > 0)
	{
		return (a);
	}
	else if (a < 0)
	{
		return (a * -1);
	}
	else
	{
		return (0);
	}
}
