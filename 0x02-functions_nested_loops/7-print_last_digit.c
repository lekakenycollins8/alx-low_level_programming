#include "main.h"

/**
 * print_last_digit - function
 * @r: character value of integer
 * Fucntion that prints last digit of a number
 * Return: Last digit
 */
int print_last_digit(int r)
{
	int last_digit = r % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
