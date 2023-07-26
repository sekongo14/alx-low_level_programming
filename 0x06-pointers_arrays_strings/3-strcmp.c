#include  "main.h"
/**
 * _strcmp - entry point
 * @s1: pointer 1
 * @s2: pointer 2
 * Return: 0 always
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1) - (*s2);
		}
		s1++;
		s2++;
	}
	return 0;
}
