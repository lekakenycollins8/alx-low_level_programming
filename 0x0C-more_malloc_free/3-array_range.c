#include "main.h"
#include <stdlib.h>

/**
 * *array_range - Creates an array of integers
 * @min: first element
 * @max: last element
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int *array;
	int i;
	int size = 1 + (max - min);

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
