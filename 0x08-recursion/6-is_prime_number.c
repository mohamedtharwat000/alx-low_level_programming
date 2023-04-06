#include "main.h"

/**
 * is_prime_helper - helper function that checks
 * if a number is prime recursively.
 * @n: input number
 * @i: current divisor to check
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_helper(int n, int i)
{
	if (n <= 2)
	{
		return ((n == 2) ? 1 : 0);
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - function that returns 1
 * if the input integer is a prime number,
 * otherwise return 0.
 * @n: input number
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_helper(n, 2));
}
