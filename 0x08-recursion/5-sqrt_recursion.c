#include "main.h"
#include <stdio.h>

int _sqrthelp(int n, int i);
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: integer to calculate sqrt
 * Return: Natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrthelp(n, 1));
}

/**
 * _sqrthelp - Calculates square root
 * @n: integer to calculate sqrt
 * @i: iteration number
 * Return: Natural square root
 */

int _sqrthelp(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (i);
	}
	return (_sqrthelp(n, i + 1));
}
