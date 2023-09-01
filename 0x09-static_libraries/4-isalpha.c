#include "main.h"

/**
 * _isalpha - entry point
 * @c: character to be checked
 * Function that checks for alphbetic character
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	return (((c >= 'a' && c >= 'A') || (c >= 'A' && c <= 'Z')) ? 1 : 0);
}
