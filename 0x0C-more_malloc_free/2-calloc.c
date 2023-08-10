#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function to create array
 * @nmemb: variable1
 * @size: variable2
 * Return: s
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	s = malloc(nmemb * size);

	if (s == NULL)
	{
		return (NULL);
	}
	return (s);
	exit(0);
}
