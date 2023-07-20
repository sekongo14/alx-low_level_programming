#include "main.h"
/**
 * print_numbers - entry point
 * Return: 1 if c is upper  else return 0
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
		_putchar(n + 48);
	}
	_putchar('\n');
}
