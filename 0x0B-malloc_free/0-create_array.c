#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - function to create array
 * @size: size of array
 * @c: caractere fir initialized array
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc((sizeof(char)) * size);

	if (s == NULL)
	{
		return (NULL);
	}


		for (i = 0; i < size; i++)
		{
			s[i] = c;
		}
		return (s);
}
