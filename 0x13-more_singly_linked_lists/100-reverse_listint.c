#include "lists.h"

/**
 * *reverse_listint - reverses a listint_t linked list.
 * @head: pointer to pointer to first node
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next;

	if (*head == NULL)
	{
		return (NULL);
	}
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (prev);
}
