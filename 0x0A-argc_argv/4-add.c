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
	int i, result = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(*(argv + i)) == 0 && (**(argv + i) > '9' || **(argv + i) < '0'))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			int num = atoi(*(argv + i));

			result += num;
		}
	}

	printf("%d\n", result);
	return (0);
}
