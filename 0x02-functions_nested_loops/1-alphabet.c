#include "main.h"

/**
 * print_alphabet - Entry point
 * Prints alphabet in lowercase
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	int l = 97;

	while (l <= 122)
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
