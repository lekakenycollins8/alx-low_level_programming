#include <stdio.h>
/**
 * main - Entry point
 * Prints all single digit numberss of base 10
 * Return: 0 (success)
 */
int main(void)
{
	int d;

	for (d = 0; d <= 9; d++)
	{
		putchar(d + 48);
	}
	putchar('\n');
	return (0);
}
