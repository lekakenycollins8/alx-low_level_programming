#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: Pointer to the input string
 * Return: Pointer to the modified string
 */

char *leet(char *str)
{
	int i;
	char *temp = str;
	char leet_chars[] = "aeotlAEOTL";
	char leet_replacements[] = "4307143071";

	while (*temp != '\0')
	{
		for (i = 0; leet_chars[i] != '\0'; i++)
		{
		if (*temp == leet_chars[i])
		{
		*temp = leet_replacements[i];
		break;
		}
		}
	temp++;
	}
	return (str);
}
