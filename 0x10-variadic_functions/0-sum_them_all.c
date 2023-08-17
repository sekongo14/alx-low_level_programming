#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
 * sum_them_all - function sum
 * @n: variable1
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
                return (0);

	unsigned int i;
	int sum = 0;

	va_list op;

	va_start(op, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(op, int);
	}
	va_end(op);
	return (sum);
}
