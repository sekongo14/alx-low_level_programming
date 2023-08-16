#include <stdio.h>

/**
 * int_index - fonction to searches an integer
 * @size: size of array
 * @array: array
 * @cmp: fontion2
 * Return: the integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || (size <= 0))
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
