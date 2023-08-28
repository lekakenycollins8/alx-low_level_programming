#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locates a character in a string
 * @s: Pointer to string
 * @c: character to be located
 * Return: pointer, or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
