#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @str: pointer to string
 * Return: pointer to modified string
 */

char *rot13(char *str)
{
	int i;
	char *temp = str;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13_alpha[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*temp != '\0')
	{
		i = 0;

		while (alpha[i] != '\0' && *temp != alpha[i])
		{
			i++;
		}
		if (alpha[i] != '\0')
		{
			*temp = rot13_alpha[i];
		}
		temp++;
	}
	return (str);
}
