#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - function
 * @s1: pointer1
 * @s2: pointer2
 * Return: s
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int len1;
	int len2;
	int lenT;
	int i;
	int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	lenT = len1 + len2 + 1;

	s = malloc(lenT);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		s[i] =  s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		s[j + i] = s2[j];
	}
	return (s);
}
