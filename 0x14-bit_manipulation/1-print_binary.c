#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in inary
 */

void print_binary(unsigned long int n)
{
	int bit_position = sizeof(n) * 8 - 1;
	unsigned long int mask = 1UL << bit_position;
	int flag = 0;

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			flag = 1;
		}
		else
		{
			_putchar('0');
		}
		mask >>= 1;
		bit_position--;
	}
	if (!flag)
	{
		_putchar('0');
	}
}
