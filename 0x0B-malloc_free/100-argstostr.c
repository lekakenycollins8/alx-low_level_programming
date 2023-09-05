#include "main.h"
#include "stdlib.h"
#include <string.h>

/**
 * *argstostr - Concatenates all the arguments of my program
 * @ac: argument count
 * @av: argument vector to be concatenated
 * Return: pointer to new string
 */

char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int total_length = 0;
	char *newstr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]);
	}
	newstr = malloc(total_length + ac + 1);

	if (newstr == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = 0; i < ac; i++)
	{
		strcpy(newstr + j, av[i]);
		j += strlen(av[i]);
		if (i < ac )
		{
			newstr[j] = '\n';
			j++;
		}
	}
	newstr[j] = '\0';
	return (newstr);
}
