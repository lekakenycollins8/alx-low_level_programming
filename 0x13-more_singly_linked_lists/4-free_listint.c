#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: pointer to first node
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *temp;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
