#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include "main.h"
/**
 * positive_or_negative - entry point
 * @i: variable
 * Return: 0 always
 */
/* more headers goes there */
/* betty style doc for function main goes there*/
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
