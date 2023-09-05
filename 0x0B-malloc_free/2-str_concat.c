#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: new string with contents from s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int length1 = (s1 != NULL) ? strlen(s1) : 0;
	int length2 = (s2 != NULL) ? strlen(s2) : 0;
	char *new;

	new = (char *)malloc(length1 + length2 + 1);

	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length1; i++)
	{
		new[i] = s1[i];
	}
	for (i = 0; i < length2; i++)
	{
		new[length1 + i] = s2[i];
	}
	new[length1 + length2] = '\0';

	return (new);
}
