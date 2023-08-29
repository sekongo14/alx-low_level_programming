#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint - add new node at end
 * @head: pointe to the first elem
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	for (; head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
