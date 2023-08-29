#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * add_node_end - add new node at end
 * @head: pointe to the first elem
 * @str: str
 * Return: new_node
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
