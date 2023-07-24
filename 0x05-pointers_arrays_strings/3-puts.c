#include "main.h"
/**
 * _puts - entry point
 * @str: pointer
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
