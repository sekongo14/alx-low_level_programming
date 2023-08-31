#include "main.h"
#include <stdio.h>


/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number from which to extract the bit.
 * @index: The index of the bit to be retrieved.
 *
 * Return: The value of the bit at index or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8) /* Ensure index is within valid range */
		return (-1);

	return ((n >> index) & 1);
}
