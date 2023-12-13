#include "main.h"

/**
 * _isupper - Entry point
 * Checks for uppercase character
 * @c: character to be checked
 * Return: 1, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
