#include "main.h"
/**
 * print_line - entry point
 * @n: variable
 * Return: 1 if c is upper  else return 0
 */
void print_line(int n)
{
	if (n == 0 || n < 0)
	{
		putchar('\n');
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			putchar('_');
		}
	}
	putchar('\n');
}
