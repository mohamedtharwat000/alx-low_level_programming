#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: number of arguments passed to the program.
 * @argv: an array of passed arguments.
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, num, result = 0;

	for (i = 1; i < argc; i++)
	{
		char *endptr;
		num = strtol(argv[i], &endptr, 10);

		if (*endptr != '\0')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			result += num;
		}
	}

	printf("%d\n", result);
	return (0);
}
