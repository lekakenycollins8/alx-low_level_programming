#include "main.h"

/**
 * puts_half - Entry point
 * Prints half of a string
 * @str: pointer to string
 */

void puts_half(char *str)
{
	int length = 0;
	int start_index;
	
	while (str[length != '\0'])
	{
		length++;
	}
	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length + 1) / 2;
	}
	while (str[start_index] < length)
	{
		_putchar(str[start_index]);
	}
	_putchar('\n');
}

