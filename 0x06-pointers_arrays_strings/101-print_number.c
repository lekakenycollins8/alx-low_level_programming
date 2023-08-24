#include "main.h"

/**
 * print_number - Prints an integer
 * @n: integer to be printed
 * Return: void
 */

void print_number(int n)
{

	int divisor = 1;
	int temp = n;

	if (n < 0)
	{
		_putchar ('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (temp / 10 != 0)
	{
		divisor *= 10;
		temp /= 10;
	}
	while (divisor != 0)
	{
		_putchar((n / divisor) + '0');
		n %= divisor;
		divisor /= 10;
	}
}
