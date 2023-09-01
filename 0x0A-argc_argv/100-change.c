#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make change
 * @argc: argument count
 * @argv: array of strings containing argument
 * Return: 0 success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int quarters, dimes, nickels, twos, ones, total_coins;
	int cents = atoi(argv[1]);

	if (argc != 2 && argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	quarters = cents / 25;
	cents %= 25;
	dimes = cents / 10;
	cents %= 10;
	nickels = cents / 5;
	cents %= 5;
	twos = cents / 2;
	cents %= 2;
	ones = cents;
	total_coins = quarters + dimes + nickels + twos + ones;

	printf("%d\n", total_coins);
	return (0);
}
