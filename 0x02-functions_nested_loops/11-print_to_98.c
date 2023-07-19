#include "main.h"
#include<stdio.h>
/**
 * print_to_98 - entry point
 * @n: variable
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d\n", n);
		}
	}
	else if (n > 98)
	{
		for (i = n; i = 98; i--)
		{
			printf("%d\n", n);
		}
	}
	else
	{
		printf("%d\n", n);
	}
}
