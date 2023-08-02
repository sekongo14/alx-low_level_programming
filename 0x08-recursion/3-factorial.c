#include "main.h"
/**
 * factorial - function return a factorial
 * @n: variable
 * Return: fatorial n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
			return ((n * factorial(n - 1)));
	}
}
