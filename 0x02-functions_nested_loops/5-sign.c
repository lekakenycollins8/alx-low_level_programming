#include "main.h"

/**
 * print_sign - Function
 * @n: checks for number
 * Function that prints sign of a number
 *Return: 1, 0, or -1 (success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
