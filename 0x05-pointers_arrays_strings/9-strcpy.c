#include "main.h"

/**
 * *_strcpy - Entry point
 * Copies string pointed to by src, including the null byte
 * to the buffer pointed to by dest
 * @dest: Pointer to destination buffer
 * @src: Pointer to source string
 * Return: Pointer to destination buffer
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	
	return (dest);
}
