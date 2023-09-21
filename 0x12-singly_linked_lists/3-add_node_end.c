#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * *add_node_end - Adds new node at the end of a list_t list
 * @head: Pointer to a pointer to the first node
 * @str: Pointer to string to be duplicated and added to new node
 * Return: Address of the new element, otherwise NULL if malloc fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current_node = *head;

	if (str == NULL)
	{
		return (NULL);
	}
	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}
	current_node->next = new_node;
	return (new_node);
}
