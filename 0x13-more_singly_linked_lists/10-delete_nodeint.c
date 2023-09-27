#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes node at index of a listint_t linked list
 * @head: pointer to pointer to first node
 * @index: index of node to be deleted
 * Return: 1 if success, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current = *head;
	listint_t *temp;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	for (i = 0; i < index - 1 && current != NULL; i++)
	{
		current = current->next;
	}
	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}
	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
