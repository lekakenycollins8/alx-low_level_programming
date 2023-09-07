#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_realloc - Reallocates a memeory block using malloc and free
 * @ptr: pointer to memory previously allocated
 * @old_size: size in bytes of allocated space for ptr
 * @new_size: size in bytes of new memory block
 * Return: pointer to new memeory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;

	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		return (newptr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else
	{
		newptr = malloc(new_size);

		if (newptr == NULL)
		{
			return (NULL);
		}
		memcpy(newptr, ptr, (old_size < new_size) ? old_size : new_size);
		free(ptr);
	}
		return (newptr);
}
