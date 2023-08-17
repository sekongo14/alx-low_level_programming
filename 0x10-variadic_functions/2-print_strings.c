#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_strings - function prints number
 * @n: variable1
 * @separator: separator
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list op;

	va_start(op, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(op, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}

		else
		{
			printf("%s", str);
		}

		if (separator == NULL)
		{
			continue;
		}

		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(op);
	printf("\n");
}
