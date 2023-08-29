#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - pops a list element from the beginning of a list
 * @head: double pointer to head of list
 * @index: index of number
 * Return: Null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int value = 0;

	while (head)
	{
		if (value == index)
		{
			return (head);
		}
		head = head->next;
		value++;
	}
	return (NULL);
}
