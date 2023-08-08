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
	int i;
	int leng;

	leng = strlen(str);
	if (str == NULL)
	{
		return (NULL);
	}
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
	free(s)
}
