#include "main.h"
/**
 * print_line - entry point
 * @n: variable
 * Return: 1 if c is upper  else return 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	
	_putchar('\n');
}
