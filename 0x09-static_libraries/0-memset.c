#include "main.h"

/**
 * _memset - Fills memeory with a constant byte
 * @s: Pointer to memory area
 * @b: constant byte
 * @n: number of bytes
 * Return: modified memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
