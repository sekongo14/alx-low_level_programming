#include  "main.h"
/**
 * _strncat - entry point
 * @dest: pointer 1
 * @src: pointer source
 * @n: variable
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int leng = 0;
	int i = 0;

	while (dest[leng] != '\0')
	{
		leng++;
	}

	while (src[i] != '\0' && i < n)
	{
		dest[leng + i] = src[i];
		i++;
	}
	dest[leng + i] = '\0';
	return (dest);
}
