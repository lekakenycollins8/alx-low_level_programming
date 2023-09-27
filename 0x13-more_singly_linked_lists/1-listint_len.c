#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list
 * @h: pointer to first node
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
