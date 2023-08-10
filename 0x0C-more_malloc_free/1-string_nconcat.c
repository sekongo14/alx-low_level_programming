#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concact two string
 * @s1: pointer to first string
 * @s2: pointer to second srting
 * @n: variable
 * Return: s
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);
{
	char *s;
	int len1;
	int len2;
	int lenT;

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
	if (n >= len2)
	{
		n = len2;
	}
	lenT = len1 + len2 + 1;

	s = malloc(lenT);

	if (s == NULL)
	{
		return (NULL);
	}
	strcpy(s, s1);
	strncat(s, s2, n);
	return (s);

}
