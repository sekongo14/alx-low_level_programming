#include "main.h"
/**
 * puts_half - entry point
 * @str: pointer
 */
void puts_half(char *str)
{
	int leng = 0;
	int leng1;
	int i;

	while (str[leng] != '\0')
	{
		leng++;
	}
	if ((leng + 1) % 2 != 0)
	{
		leng1 = (leng - 1) / 2;
	}
	else
	{
		leng1 = leng / 2;
	}
	for (i = leng1; i < leng; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
