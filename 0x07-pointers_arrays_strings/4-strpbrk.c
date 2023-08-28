#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: Pointer to string
 * @accept: Pointer to string of particular set
 * Return: Pointer to string, NULL if no match is foung
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *curr_accept = accept;

		while (*curr_accept != '\0')
		{
			if (*s == *curr_accept)
			{
				return (s);
			}
			curr_accept++;
		}
		s++;
	}
	return (NULL);
}
