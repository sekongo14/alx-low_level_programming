#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * add_nodeint_end - add new node at end
 * @head: pointe to the first elem
 * @n: str
 * Return: new_node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	if (head == NULL)
	{
		return (NULL);
	}


	new_node = (listint_t *) malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
