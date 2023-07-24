#include "main.h"
/**
 * _strlen - entry point
 * @s: pointer
 * Return: longeur
 */
int _strlen(char *s)
{
	int longeur = 0;

	while (*s != '\0')
	{
		longeur = longeur + 1;
		s++;
	}
	return (longeur);
}
