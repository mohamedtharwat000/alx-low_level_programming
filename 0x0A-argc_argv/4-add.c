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
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	int i, j, result = 0;

	for (i = 1; i < argc; i++)
	{
		int num = atoi(*(argv + i));

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (atoi(&argv[i][j]) == 0 && argv[i][j] != '0')
			{
				printf("Error\n");
				return (1);
			}
		}

		result += num;
	}

	printf("%d\n", result);
	return (0);
}
