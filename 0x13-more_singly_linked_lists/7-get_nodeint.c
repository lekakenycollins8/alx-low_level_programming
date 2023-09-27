#include "lists.h"

/**
 * *get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: pointer to the first node
 * @index: index of the node
 * Return: the nth node of list, otherwise NULL if node doesnt exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
