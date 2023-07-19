#include "main.h"
/**
 * print_to_98 - entry point
 * @n: variable
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(n + 48);
		}
		_putchar('\n');
	}
	else if (n > 98)
	{
		for (i = n; i = 98; i--)
		{
			_putchar(n + 48);
		}
		_putchar('\n');
	}
	else
	{
		_putchar(n + 98);
	}
	_putchar('\n');
}
