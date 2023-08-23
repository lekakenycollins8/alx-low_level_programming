#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: pointer to first string
 * @s2: Pointer to second string
 * Return: diffrence between the strings
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
