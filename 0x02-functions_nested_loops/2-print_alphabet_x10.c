#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet 10 times
 * Return: 0
 */

 void print_alphabet_x10(void)
 {
	int i10;
	for (i10 = 0; i10 < 10; i10++)
	{
		char CHAR;
		for (CHAR = 'a'; CHAR <= 'z'; CHAR++)
		{
			_putchar(CHAR);
		}
		_putchar('\n');
	}
 }