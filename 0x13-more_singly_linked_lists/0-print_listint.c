#include "lists.h"
#include <stdio.h>
/**
 *print_listint - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t val;

	val = 0;
	while (h)
	{
		printf("%u\n", (unsigned int)h->n);
		h = h->next;
		val++;
	}
	return (val);
}
