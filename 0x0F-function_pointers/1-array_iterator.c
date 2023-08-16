#include <stdio.h>
/**
 * array_iterator - fonction principal
 * @array: pointer array
 * @size: size of array
 * @action: fonction 2
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action || (size < 1))
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
