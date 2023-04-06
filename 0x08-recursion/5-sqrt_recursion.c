#include "main.h"

/**
 * sqrt_helper - helper function
 * @n: helper input
 * @i: helper input
 * Return: the natural square root of a number.
 */

int sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (i - 1);
	}
	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * raised to the power of y.
 * @n: input number
 * Return: the natural square root of a number.
 *
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}

	return (sqrt_helper(n, 1));
}
