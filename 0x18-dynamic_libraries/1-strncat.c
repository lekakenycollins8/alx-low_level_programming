#include "main.h"

/**
 * _strncat - Concatenates two strings and will use at most n bytes from src
 * @dest: Pointer to destination
 * @src: Pointer to source
 * @n: number of bytes to concatenate to
 * Return: Pointer to the destination character
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (result);
}

