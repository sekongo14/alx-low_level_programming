#include <stdio.h>
/**
 * print_name - fonction print name
 * @name: name
 * @f: fonction pointer
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
	return (0);
}
