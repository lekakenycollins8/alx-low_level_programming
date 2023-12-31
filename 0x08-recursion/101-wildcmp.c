#include "main.h"

/**
 * wildcmp - Compares two strings considering wildcards
 * @s1: First string
 * @s2: Second string with wildcards
 * Return: 1 if strings match, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		else if (*(s2 + 1) == '\0')
		{
			return (1);
		}
		else if (*s1 != '\0' && wildcmp(s1 + 1, s2))
		{
		return (1);
		}
		return (wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
	if (*s1 == '\0')
	{
	return (1);
	}
	return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
