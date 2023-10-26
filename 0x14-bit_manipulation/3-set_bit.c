#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to the number to be set
 * @index: index of number of bit to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (n == NULL && index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= mask;
	return (1);
}
