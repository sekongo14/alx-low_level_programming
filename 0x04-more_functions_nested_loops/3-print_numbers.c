#include "main.h"
/**
 * print_numbers - entry point
 * Return: 1 if c is upper  else return 0
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + 48);
	}
	_putchar('\n');
}
