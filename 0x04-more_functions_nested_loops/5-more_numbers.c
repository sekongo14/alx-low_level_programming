#include "main.h"
/**
 * more_numbers - entry point
 * Return: 1 if c is upper  else return 0
 */
void more_numbers(void)
{
	int n;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar('1');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
