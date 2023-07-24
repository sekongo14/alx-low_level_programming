#include "main.h"
/**
 * print_rev - entry point
 * @s: pointer
 */
void print_rev(char *s)
{
	int leng;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	s--;
	while (leng > 0)
	{
		_putchar(*s);
		s--;
		leng--;
	}
	_putchar('\n');
}
