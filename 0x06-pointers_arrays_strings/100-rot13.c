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
	char lowercase_alpha[] = "abcdefghijklmnopqrstuvwxyz";
	char uppercase_alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13_alpha[] = "nopqrstuvwxyzabcdefghijklm";
	char rot13_ualpha[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*temp != '\0')
	{
		for (i = 0; rot13_alpha[i] && rot13_ualpha[i] != '\0'; i++)
		{
			if (*temp == lowercase_alpha[i] || *temp == uppercase_alpha[i])
			{
				*temp = (*temp == lowercase_alpha[i]) ? rot13_alpha[i] : rot13_ualpha[i];
				break;
			}
		}
		temp++;
	}
	return (str);
}
