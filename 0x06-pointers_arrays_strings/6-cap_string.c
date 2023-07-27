#include "main.h"
/**
 * cap_string - entry point
 * @s: variable
 * Return: s
 */
char *cap_string(char *s)
{
	int majusculeSuivante = 1;
	char *ptr = s;

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
			if (ptr == s || *(ptr - 1) == ' ' ||
					*(ptr - 1) == '\t' || *(ptr - 1) == '\n' ||
			*(ptr - 1) == ',' || *(ptr - 1) == ';' || *(ptr - 1) == '.' ||
			*(ptr - 1) == '!' || *(ptr - 1) == '?' || *(ptr - 1) == '"' ||
			*(ptr - 1) == '(' || *(ptr - 1) == ')' || *(ptr - 1) == '{' ||
			*(ptr - 1) == '}')
			{
				*ptr = *ptr - ('a' - 'A');
				majusculeSuivante = 0;
			}
		}
		ptr++;
	}

	return (s);
}
