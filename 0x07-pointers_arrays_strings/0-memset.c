#include "main.h"
/**
 * _memset - entry point
 * @s: pointer
 * @b: variable
 * @n: unsigned var
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	putchar('\n')
	return (s);
}
