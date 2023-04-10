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
	int i, j, result = 0;

	for (i = 1; i < argc; i++)
	{

		for (j = 0; *(*(argv + i) + j) != '\0'; j++)
		{
			if (*(*(argv + i) + j) < '0' || *(*(argv + i) + j) > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		int num = atoi(*(argv + i));

		result += num;
	}

	printf("%d\n", result);
	return (0);
}
