#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: number of arguments passed to the program.
 * @argv: an array of passed arguments.
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *argv++);

	}

	return (0);
}
