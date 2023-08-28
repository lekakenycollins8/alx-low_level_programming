#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring
 * @haystack - Pointer to main string
 * @needle: Pointer to substring
 * Return: Pointer to main string, NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *hayptr = haystack;
		char *needleptr = needle;

		while (*needleptr != '0' && *hayptr == *needleptr)
		{
			hayptr++;
			needleptr++;
		}
		if (*needleptr == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
