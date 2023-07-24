#include "main.h"
/**
 * swap_int - entry point
 * @a: pointer 1
 * @b: pointer 2
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
