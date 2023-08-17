#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
 * sum_them_all - function sum
 * @n: variable1
 * Return: sum
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list op;

	va_start(op, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(op, int));
		if(separator == NULL)
		{
			continue;
		}
		if(i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(op);
	printf("\n");
}
