#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - function name
 * @a: pointer
 * @size: varisble
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sommeDiagonalePrincipale = 0;
	int sommeDiagonaleSecondaire = 0;

	for (i = 0; i < size; i++)
	{
		sommeDiagonalePrincipale += a[i * size + i];
		sommeDiagonaleSecondaire += a[i * size + (size - 1 - i)];
	}
	printf("%d", sommeDiagonalePrincipale);
	printf(", ");
	printf("%d", sommeDiagonaleSecondaire);
	printf("\n");
}
