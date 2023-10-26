#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int result;

	result = n ^ m;

	while (result > 0)
	{
		count += result & 1;
		result >>= 1;
	}
	return (count);
}
