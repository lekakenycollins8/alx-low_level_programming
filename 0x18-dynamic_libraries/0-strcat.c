#include "main.h"

/**
 * _strcat - Appends src string to the dest string
 * @dest: pointer to destination character
 * @src: pointer to source character
 * Return: pointer to the destination character
 */

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
}
