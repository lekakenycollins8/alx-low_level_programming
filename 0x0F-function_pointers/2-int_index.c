#include "stddef.h"
#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @size: number of elements in the array
 * @array: pointer to the array to search
 * @cmp: Pointer to function used to compare values
 *
 * Return: -1 if size less than 0 or array is NULL or no match found
 * otherwise return index of the first match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && array)
	{
		if (size <= 0 || array == NULL)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
