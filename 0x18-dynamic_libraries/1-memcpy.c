#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of bytes
 * Return: modified destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
