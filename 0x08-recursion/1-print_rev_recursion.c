#include "main.h"

/**
 * _puts_recursion - prints a string in reverse.
 * followed by a new line.
 * @s: string
 * Return: nothing
*/

void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(s[0]);
}