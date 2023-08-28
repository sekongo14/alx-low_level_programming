#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_nodeint - add new node
 * @head: pointe to the first elem
 * @n: str
 * Return: new_node
 */

listint_t *add_nodeint(listint_t **head, const int n)
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
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
