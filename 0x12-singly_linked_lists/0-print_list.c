#include "lists.h"
#include <stdlib.h>

/**
 * print_list - print a list
 * @h: pointer to lst
 * Return: i (length of list)
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%zu] (nil)\n";
		}

		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
