#include "main.h"

/**
 * swap_int - Entry point
 * Swaps the values of two integers
 * @a: character representing first integer
 * @b: character representing second integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
