#include "main.h"
#include <stdio.h>

/**
 * main - program that multiplies two numbers.
 * @argc: number of arguments passed to the program.
 * @argv: an array of passed arguments.
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int num1, num2;
		sscanf(argv[1], "%d", &num1);
		sscanf(argv[1], "%d", &num2);
		int result = num1 * num2;
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
