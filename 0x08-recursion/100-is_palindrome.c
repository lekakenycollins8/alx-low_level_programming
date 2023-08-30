#include "main.h"
#include <string.h>

int check_palindrome(char *s, int start, int end);

/**
 * is_palindrome - Checks for palindrome
 * @s: string to be checked
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	return (check_palindrome(s, 0, length - 1));
}

/**
 * check_palindrome - Checks for palindrome
 * @s: string to be checked
 * @start: start of string
 * @end: end of string
 * Return: 1 if plaindrome, 0 otherwise
 */

int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
	return (0);
	}
	return (check_palindrome(s, start + 1, end - 1));
}
