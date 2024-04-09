#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value:  the value to search for
 *
 * Return: the first index where value is located
 * returns -1 if value not present or array is null
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t left = 0;
	size_t right = size - 1;

	if (array == NULL)
	{
		return (-1);
	}
	while (left < right)
	{
		size_t mid = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
			{
				printf(", ");
			}
		}
		printf("\n");
		if (value == array[mid])
		{
			return (mid);
		}
		else if (value < array[mid])
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return (-1);
}
