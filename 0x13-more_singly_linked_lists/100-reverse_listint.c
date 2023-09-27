#include "lists.h"

/**
 * *reverse_listint - reverses a listint_t linked list.
 * @head: pointer to pointer to first node
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current;

	if (*head == NULL)
	{
		return (NULL);
	}
	while (*head != NULL)
	{
		current = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = current;
	}
	*head = prev;
	return (prev);
}
