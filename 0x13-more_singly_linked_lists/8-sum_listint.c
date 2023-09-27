#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data (n) of a
 * listint_t linked list
 * @head: pointer to the first node
 * Return: sum of all the data of list, otherwise 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int data;
	int sum = 0;
	listint_t *current = head;

	if (head == NULL)
	{
		return (0);
	}
	while (current != NULL)
	{
		data = current->n;
		sum += data;
		current = current->next;
	}
	return (sum);
}
