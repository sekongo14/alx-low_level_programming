#include "main.h"
/**
 * print_square - entry point
 * @size: variable
 * Return: 1 if c is upper  else return 0
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
