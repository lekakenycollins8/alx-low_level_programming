#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - Returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: original string to be duplicated
 * Return: pointer to duplicated string
 */

char *_strdup(char *str)
{
	char *duplicate;
	int length = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	duplicate = malloc(length + 1);

	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[length] = '\0';
	return (duplicate);
}
