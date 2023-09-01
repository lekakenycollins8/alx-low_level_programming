#include "main.h"

/**
 * _abs - function
 * @r: character that represents integer value
 * Computes the absolute value of an integer
 * Return: r (success)
 */
int _abs(int r)
{
	if (r < 0)
	{
		return (-r);
	}
	else
	{
		return (r);
	}
}
