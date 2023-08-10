#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function to create array and sort
 * @min: min value
 * @max: max value
 * Return: s
 */

int *array_range(int min, int max)
{
	int *s;
	int len = 0;
	int i;
	int j;

	if (min > max)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		len += 1;
	}

	s = malloc(len * sizeof(int));

	if (s == NULL)
	{
		return (NULL);
	}

	for (j = min; j <= max; j++)
	{
		s[j] = j;
	}
	return (s);
}
