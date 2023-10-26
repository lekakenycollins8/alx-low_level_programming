#include "main.h"

/**
 * _power - calculates power
 * @base: base of exponent
 * @power: power of exponent
 * Return: return result (base ^ power)
 */

unsigned long int _power(unsigned int base, unsigned int power)
{
	unsigned long int result;
	unsigned int i;

	result = 1;

	for (i = 1; i <= power; i++)
	{
		result *= base;
	}
	return (result);
}

/**
 * print_binary -Prints the binary representation of a number
 * @n: number to be printed in binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int div, checker;
	char flag = 0;

	div = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (div != 0)
	{
		checker = n & div;
		if (checker == div)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
