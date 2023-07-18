#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * Descrition pritnt abcdefghijklmnopqrstuvwxyz
 * Return: 0 always
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char ch;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
