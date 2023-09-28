#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to be checked
 * @index: index of n
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;
	int result;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	result = n & mask;

	return ((result != 0) ? 1 : 0);
}
