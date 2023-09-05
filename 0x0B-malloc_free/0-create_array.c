#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Creates an array of chars, and,
 * initiliazes it with a specific char
 * @size: size of array
 * @c: character to be initialized
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size + 1);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
