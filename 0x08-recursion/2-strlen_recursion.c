#include "main.h"

/**
 * _strlen_recursion - Returns length of a string
 * @s: Pointer to string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int length;

	if (*s == '\0')
	{
		return (0);
	}
	length = _strlen_recursion(s + 1);

	return (length + 1);
}
