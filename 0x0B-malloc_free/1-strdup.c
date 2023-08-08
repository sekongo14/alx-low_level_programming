#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strdup - function
 * @str: String
 * Return: s
 */
char *_strdup(char *str)
{
	char *s;
	size_t i;
	size_t leng;

	if (str == NULL)
	{
		return (NULL);
	}
	leng = strlen(str);
	s = malloc(leng + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < leng; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
