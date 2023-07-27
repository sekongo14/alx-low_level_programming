#include "main.h"
/**
 * string_toupper - entry point
 * @c: pointer
 * Return: c
 */
char *string_toupper(char *c)
{
	char *ptr = c;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}

	return (c);
}
