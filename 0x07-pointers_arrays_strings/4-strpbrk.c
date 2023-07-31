#include "main.h"
#include <string.h>
/**
 * _strpbrk - function
 * @s: pointer1
 * @accept: pointer 2
 * Return: a pointer to the byte in s that matches one of the bytes
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
