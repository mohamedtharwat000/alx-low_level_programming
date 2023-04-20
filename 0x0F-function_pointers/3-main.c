#include "3-calc.h"

/**
 * main - program that performs simple operations.
 * @argc: number of argument
 * @argv: second int input
 * Return: 0
 * The program prints the result of the operation, followed by a new line
*/

int main(int argc, char **argv)
{
	char *operator;
	int operand1;
	int operand2;
	int result;

	operator = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((argv[2][0] != '+') || (argv[2][0] != '-') ||
		(argv[2][0] != '/') || (argv[2][0] != '%'))
	{
		printf("Error\n");
		exit(99);
	}

	if (atoi(argv[3]) == 0 && ((argv[2][0] != '/') ||
		(argv[2][0] != '%')))
	{
		printf("Error\n");
		exit(100);
	}

	operand1 = atoi(argv[1]);
	operand2 = atoi(argv[3]);
	result = (*get_op_func(operator))(operand1, operand2);

	printf("%i\n", result);

	return (0);
}
