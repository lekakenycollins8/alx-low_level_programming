#include "main.h"
#include <stdio.h>

int prime_number_help(int n, int divisor);

/**
 * is_prime_number - Returns 1 if integer is a prime number, 0 otherwise
 * @n: input integer
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_number_help(n, 2));
}

/**
 * prime_number_help - Determines if n is a prime number
 * @n: input integer
 * @divisor: current divisor being checked
 * Return: 1 if prime number, 0 otherwise
 */

int prime_number_help(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (prime_number_help(n, divisor + 1));
}
