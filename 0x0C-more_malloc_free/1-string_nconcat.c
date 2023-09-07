#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *string_nconcat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: first s2 characters
 * Return: pointer to modified string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        unsigned int i;
        char *newstr;
        unsigned int len1 = strlen(s1);
        unsigned int len2 = strlen(s2);
        unsigned int total_len = len1 + ((n < len2) ? n : len2);

        if (s1 == NULL)
        {
                s1 = "";
        }
        if (s2 == NULL)
        {
                s2 = "";
        }
        newstr = malloc(total_len + 1);

        if (newstr == NULL)
        {
                return (NULL);
        }
        for (i = 0; i < len1; i++)
        {
                newstr[i] = s1[i];
        }
        if (n < len2)
        {
		for (i = 0; i < n; i++)
		{
			newstr[len1 + i] = s2[i];
		}
	}
	else
	{
		for (i = 0; i < len2; i++)
		{
			newstr[len1 + i] = s2[i];
		}
	}
	newstr[total_len] = '\0';
	return (newstr);
}
