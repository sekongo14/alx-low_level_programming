#include "main.h"
#include <String.h>
/**
 * _memset - fills memory with a constant byte
 * @s: memory space to be filled
 * @b: byte 
 * @n: number of spaces to fill
 *
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
