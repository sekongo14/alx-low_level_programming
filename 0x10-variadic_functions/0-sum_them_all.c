#include <stdio>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function sum
 * @n: variable1
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;

	if (n == 0)
		return (0);

	va_list op;

	va_start(op, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(op, unsigned int);
	}
	va_end(op);
	return (sum);
}
