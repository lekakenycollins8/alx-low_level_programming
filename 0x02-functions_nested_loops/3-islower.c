#include "main.h"

/**
 * _islower - entry point
 * Function that checks for lowercase character
 * Return: result
 */
int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}
