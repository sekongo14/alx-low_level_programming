#include "main.h"
#include<ctype.h>
/**
 *_isalpha - entry point
 * @c: The character to print
 * Return: 0 always
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
