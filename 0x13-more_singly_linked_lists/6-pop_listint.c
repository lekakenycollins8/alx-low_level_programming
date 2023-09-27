#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to the pointer to the first node
 * Return: the head node’s data (n).
 *
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *old_head = *head;

	if (*head == NULL)
	{
		return (0);
	}
	data = old_head->n;
	*head = old_head->next;
	free(old_head);
	return (data);
}
