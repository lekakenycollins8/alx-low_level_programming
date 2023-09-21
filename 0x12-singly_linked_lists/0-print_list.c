#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of list_t
 * @h: pointer to first node
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	size_t count = 0;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
		count++;
	}
	return (count);
}
