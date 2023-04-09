#include "main.h"
#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: number of arguments passed to the program.
 * @argv: an array of passed arguments.
 * Return: 0
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
