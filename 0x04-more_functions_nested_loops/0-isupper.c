#include "main.h"
#include<ctype.h>
/**
 * _isupper - entry point
 * @c: variable
 * Return: 1 if c is upper  else return 0
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
