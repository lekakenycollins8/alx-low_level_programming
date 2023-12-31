#include "main.h"
#include <string.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointer to a string of 0 and 1 characters
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int multiplier = 1;
	unsigned int length = strlen(b);

	if (b == NULL)
	{
		return (0);
	}
		while (length > 0)
	{
		if (b[length - 1] != '0' && b[length - 1] != '1')
		{
			return (0);
		}
		if (b[length - 1] == '1')
		{
			result += multiplier;
		}
		multiplier *= 2;
		length--;
	}
		return (result);
}
