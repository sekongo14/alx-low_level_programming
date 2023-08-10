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
	int j;

	if (min > max)
	{
		return (NULL);
	}


	s = malloc((max - min + 1) * sizeof(int));

	if (s == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= max - min; j++)
	{
		s[j] = min + j;
	}
	return (s);
}
