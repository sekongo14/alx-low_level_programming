#include "main.h"
/**
 * cap_string - entry point
 * @s: variable
 * Return: s
 */
char *cap_string(char *s)
{
	int majusculeSuivante = 1;
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
				*ptr == ',' || *ptr == ';' || *ptr == '.' ||
		*ptr == '!' || *ptr == '?' || *ptr == '"'
		|| *ptr == '(' || *ptr == ')' || *ptr == '{' ||
		*ptr == '}')
		{
			majusculeSuivante = 1;
		}
		else if (majusculeSuivante && *ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
			majusculeSuivante = 0;
		}
		ptr++;
	}

	return (s);
}
