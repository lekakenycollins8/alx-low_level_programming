#include <stdio.h>
/**
 * main - Entry point
 * Prints all possible combinations of single-digit numbers
 * Return: 0 (success)
 */
int main(void)
{
	int p;

	for (p = 48; p <= 57; p++)
	{
		putchar(p);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
