#include <stdio.h>
/**
 * main - Entry point
 * Prints all single digit numbers of base 10
 * Return: 0 (success)
 */
int main(void)
{
	int d;
	for (d = 0; d <= 9; d++)
	{
		printf("%d", d);
	}
	printf("\n");
	return (0);
}
