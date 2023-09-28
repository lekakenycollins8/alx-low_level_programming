#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in inary
 */

void print_binary(unsigned long int n)
{
	int print = 0;
	int Number_of_bits = sizeof(n) * 8;
	int mask = 1 << (Number_of_bits - 1);

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			print = 1;
		}
		else if (print)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
