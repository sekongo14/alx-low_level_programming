#include <stdio.h>
/**
 * print_name - fonction print name
 * @name: name
 * @f: fonction pointer
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
	return (0);
}
