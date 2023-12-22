#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size - Size of the array
 *
 * Return: a pointer to the newly created hash table
 * If something went wrong, function returns NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *table;
	hash_node_t **item_array;

	if (size == 0)
		return (NULL);

	/* Allocate space for the  table */
	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	/* Allocate space for the array */
	item_array = malloc(sizeof(*item_array) * size);

	if (item_array == NULL)
	{
		free(table);
		return (NULL);
	}
	while (i < size)
	{
		item_array[i] = NULL;
		i++;
	}
	table->size = size;
	table->array = item_array;

	return (table);
}
