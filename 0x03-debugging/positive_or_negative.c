#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include "main.h"
/**
 * positive_or_negative - entry point
 * @n: variable
 * Return: 0 always
 */
/* more headers goes there */
/* betty style doc for function main goes there*/
void positive_or_negative(int n)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;
       /* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
