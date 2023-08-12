#include <stdio.h>
/**
 * main - Entry point
 * Prints all possible combinations of two two-digit numbers
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 98; i++)
	{
	for (j = i; j <= 99; j++)
		{
	int tens_i = i / 10;
	int ones_i = i % 10;
	int tens_j = j / 10;
	int ones_j = j % 10;

		putchar(tens_i + '0');
		putchar(ones_i + '0');
		putchar(' ');
		putchar(tens_j + '0');
		putchar(ones_j + '0');
		if (i != 98 || j != 99)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}
