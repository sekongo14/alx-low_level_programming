#include "main.h"
/**
 * print_rev - entry point
 * @s: pointer
 */
void print_rev(char *s)
{
	int j, n;

	n = 0;
	while (s[n] != '\0')
		n++;

	for (j = n - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
