#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to pointer to the first node
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *temp;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	*head = NULL;
}
