#include "main.h"
#include "stdio.h"


/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1); /* Right shift to process the higher bits */

	putchar((n & 1) + '0'); /* Print the current bit (1 or 0) */
}
