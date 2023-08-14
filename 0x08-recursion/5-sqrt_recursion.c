#include "main.h"
#include <math.h>

 /** 
 * _sqrt_helper - function helper
 * @n: variable
 * @start: variable
 * @end: variable
 * Return: sqrt
*/
int _sqrt_helper(int n, int start, int end)
{
		if (start > end)
		{
			return (-1);
		}

	int middle = start + (end - start) / 2;
	int square = middle * middle;

	if (square == n)
	{
		return (middle);
	}
	else if (square > n)
	{
		return (_sqrt_helper(n, start, middle - 1));

	}
	else
	{
		return (_sqrt_helper(n, middle + 1, end));
	}
}
/**
 * _sqrt_recursion - function name
 * @n: varable
 * Return : sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt_helper(n, 0, n));
}
