#include "main.h"

/**
 * cap_string - Capitalizes all words of a string 
 * @str: pointer to string
 * Return: pointer to modified string
 */

char *cap_string(char *str)
{
	char *temp = str;
	int capitalize = 1;

	while (*temp != '\0')
	{
		if (*temp == ' ' || *temp == '\n' || *temp == '\t' || *temp == '.' || *temp == ',' || *temp == ';' || *temp == '!' || *temp == '?' || *temp == '"' || *temp == '(' || *temp == ')' || *temp == '{' || *temp == '}')
		{
			capitalize = 1;
		}
		else if ((*temp >= 'a' && *temp <= 'z') && capitalize)
		{
			*temp = *temp - 'a' + 'A';
			capitalize = 0;
		}
		else
		{
			capitalize = 0;
		}
		temp++;
	}
	return str;
}
