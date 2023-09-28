#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to the number
 * @index: index of the number of the bit to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (n == NULL && index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~mask;
	return (1);
}
