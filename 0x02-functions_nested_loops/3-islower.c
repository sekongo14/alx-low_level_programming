#include "main.h"
#include<ctype.h>
/**
 *_islower - entry point
 * @c: The character to print
 * Return: 0 always
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
