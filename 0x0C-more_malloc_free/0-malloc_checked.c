#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function to allocate space for int b
 * @b: variable
 * Return: all
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *all;

	all = malloc(b);
	if (all == NULL)
	{
		exit(98);
	}
	return (all);

}
