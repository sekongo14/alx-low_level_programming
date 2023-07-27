#include "main.h"
/**
 * leet - entry point
 * @s: pointer
 * Return: s
 */
char *leet(char *s)
{
	int i;
	char *ptr = s;
	char replacements[5][2] = { {'a', '4'}, {'e', '3'}, {'o', '0'},
		{'t', '7'}, {'l', '1'} };

	while (*ptr != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*ptr == replacements[i][0] || *ptr == (replacements[i][0] - 'a' + 'A'))
			{
				*ptr = replacements[i][1];
				break;
			}
		}
		ptr++;
	}
	return (s);
}
