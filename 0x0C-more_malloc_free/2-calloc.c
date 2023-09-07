#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - Allocates memeory for an array using malloc
 * @nmemb: number of elements
 * @size: size of each element
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	unsigned char *byteptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	byteptr = (unsigned char *)ptr;

	for (i = 0; i < nmemb * size; i++)
	{
		byteptr[i] = 0;
	}
	return (ptr);
}
