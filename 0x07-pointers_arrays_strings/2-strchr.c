#include "main.h"
/**
 * _strchr - entry point
 * @s: pointer
 * @c: variable
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
