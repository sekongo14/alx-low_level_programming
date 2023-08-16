#include <stdio.h>

/**
 * int_index - fonction to searches an integer
 * @size: size of array
 * @cmp: fontion2
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	size_t i;

	if (!array || !cmp || (size < 1))
		return;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
