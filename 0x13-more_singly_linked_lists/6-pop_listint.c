#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - pops a list element from the beginning of a list
 * @head: double pointer to head of list
 *
 * Return: value of n for element deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	size_t copy;

	if (!*head)
		return (0);
	copy = (*head)->n;
	new_head = (*head)->next;
	free(*head);
	*head = new_head;
	return (copy);
}
