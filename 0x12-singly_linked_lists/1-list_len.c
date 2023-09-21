#include "lists.h"
#include <stddef.h>

/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: Pointer to first node
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	size_t count = 0;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
