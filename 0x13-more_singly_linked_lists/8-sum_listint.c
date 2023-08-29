#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - pops a list element from the beginning of a list
 * @head: double pointer to head of list
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
