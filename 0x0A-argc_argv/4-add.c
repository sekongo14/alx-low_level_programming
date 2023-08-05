#include "main.h"
#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

/**
 * main - entry point
 * @argc: size of argv
 * @argv: list
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int j;
			int len = strlen(argv[i]);

			for (j = 0; j < len; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
