#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @s: Pointer to input string
 * Return: pointer to modified string
 */

char *string_toupper(char *s)
{
	char *temp = s;

	while (*temp != '\0')
	{
	if (*temp >= 'a' && *temp <= 'z')
	{
	*temp = *temp - 'a' + 'A';
	}
	temp++;
	}
	return (s);
}
