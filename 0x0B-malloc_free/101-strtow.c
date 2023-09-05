#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * countWords - Counts the number of words in a string
 * @str: input string
 * Return: word count
 */

int countWords(char *str)
{
	int word_count = 0;
	int length = 0;
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr == ' ')
		{
			if (length > 0)
			{
				word_count++;
				length = 0;
			}
		}
		else
		{
			length++;
		}
		ptr++;
	}
	if (length > 0)
	{
		word_count++;
	}
	return (word_count);
}

/**
 * tokenizeWords - Tokenize and store words in an array
 * @words: stores tokenized words
 * @str: input string
 */

void tokenizeWords(char **words, char *str)
{
	char *word = strtok(str, " ");
	int word_index = 0;

	while (word != NULL)
	{
		words[word_index] = (char *)malloc(strlen(word) + 1);

		if (words[word_index] == NULL)
		{
			return;
		}
		strcpy(words[word_index], word);
		word_index++;
		word = strtok(NULL, " ");
	}
	words[word_index] = NULL;
}

/**
 * **strtow - Splits string intwo words
 * @str: input string
 * Return: pointer to an array of strings
 */

char **strtow(char *str)
{
	char **words;
	int word_count;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	word_count = countWords(str);
	words = (char **)malloc(sizeof(char *) * (word_count + 1));

	if (words == NULL)
	{
		return (NULL);
	}
	tokenizeWords(words, str);
	return (words);
}
