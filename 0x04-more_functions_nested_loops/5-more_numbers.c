#include "main.h"
/**
 * more_numbers - entry point
 * Return: 1 if c is upper  else return 0
 */
void more_numbers(void)
{
	int n;
	int i = 0;

	while (i < 10)
	{
		for (n = 0; n <= 9; n++)
		{
			_putchar(n + 48);
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
