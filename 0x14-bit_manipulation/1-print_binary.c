#include "main.h"

/**
 * print_binary -Prints the binary representation of a number
 * @n: number to be printed in binary
 */

void print_binary(unsigned long int n)
{
	int bits;

	for (bits = sizeof(n) * 8 - 1; bits >= 0; bits--)
	{
		_putchar((n >> bits) & 1 ? '1' : '0');
	}
}
