#include "main.h"
#include "stdio.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to the binary string.
 *
 * Return: The converted number, or 0 if invalid character found or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int bit;
	int position = 0;

	if (b == NULL)
		return (0);

	while (b[position] != '\0')
	{
		if (b[position] != '0' && b[position] != '1')
			return (0);

		bit = b[position] - '0';

		result = (result << 1) | bit;

		position++;
	}

	return (result);
}
