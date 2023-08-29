#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint2 - add new node at end
 * @head: pointe to the first elem
 */

void free_listint2(listint_t **head)
{
	listint_t **tmp;

	while (head)
	{
		free(*head);
		*head = (*head->next);
	}
	head = NULL;
}
