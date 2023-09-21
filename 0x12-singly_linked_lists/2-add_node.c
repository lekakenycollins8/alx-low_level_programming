#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * *add_node - Adds a new node at the beginning of a list_t list
 * @head: Pointer to a pointer to the first node
 * @str: String to be duplicated and added to new node
 * Return: Address of new element, otherwise NULL if malloc fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
	{
		return (NULL);
	}
	new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);

	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
