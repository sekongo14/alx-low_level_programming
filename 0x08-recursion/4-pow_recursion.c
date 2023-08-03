#include "main.h"
#include <stdlib.h>
/**
 * _pow_recursion - function name
 * @x: variable1
 * @y: variable2
 * Return: number pow
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
