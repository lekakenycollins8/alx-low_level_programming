#include "main.h"

/**
 * _islower - function
 * @c: character to be checked
 * Function that checks for lowercase character
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}
