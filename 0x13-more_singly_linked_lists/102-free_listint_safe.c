#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list
 * @h: pointer to the pointer to the first node
 * Return: the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current = *h;
	listint_t *next_node;

	if (*h == NULL)
	{
		return (0);
	}
	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		count++;

		if (next_node >= current)
		{
			break;
		}
		current = next_node;
	}
	*h = NULL;
	return (count);
}
