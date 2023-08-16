#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: array containg all arguments
 *
 * Return: Exit status 0 if successful or 98 or 99 or 100 if no
 */

int main(int argc, char *argv[])
{
	int (*op_func)(int, int);
	char *op;
	int num1;
	int num2;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = argv[2];

	op_func = get_op_func(op);
	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (((*op == '/') || (*op == '%')) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = op_func(num1, num2);

	printf("%d\n", result);

	return (0);
}
