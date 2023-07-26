#include "main.h"
/**
 * _strcat - entry point
 * @dest: pointer 1
 * @src: pointer 2
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int leng = 0;
	int j = 0;

	while (dest[leng] != '\0')
	{
		leng++;
	}

	while (src[j] != '\0')
	{
		dest[leng] = src[j];
		leng++;
		j++;
	}

	dest[leng] = '\0';
	return (dest);
}
