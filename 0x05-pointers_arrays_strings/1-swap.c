#include "main.h"

/**
 * rswap_int - function that swaps the values of two integers.
 * @a: first value
 * @a: second value
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int *c = a;
	*a = b;
	*b = c;
}
