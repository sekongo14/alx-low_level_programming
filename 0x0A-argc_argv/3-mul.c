#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: size of argv
 * @argv: list
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc == 1)
	{
		printf("error");
		return (1);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
