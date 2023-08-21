#include "main.h"

/**
 * puts2 - Entry point
 * prints every other character of a string
 * starting with the first character
 * @str: pointer to string
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		if (str[i] == '\0')
		{
			break;
		}
		i++;
	}
	_putchar('\n');
}
