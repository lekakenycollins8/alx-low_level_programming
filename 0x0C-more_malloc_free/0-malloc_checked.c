#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - Allocates memeory using malloc
 * @b: size of bytes
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
