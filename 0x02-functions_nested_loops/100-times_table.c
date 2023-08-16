#include "main.h"

/**
 * print_times_table - Function
 * @n: random integer
 * Function to print times table
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n < 0 || n > 15)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for(j = 0; j <= n; j++)
		{
			int product = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (product == 0)
			
				_putchar('0');
			else if (product < 10)
				_putchar(' '), _putchar(' '), putchar(product + '0');
			else if (product < 100)
				_putchar(' '), _putchar(product / 10 + '0'), _putchar(product % 10 + '0');
			else
				_putchar(product / 100 + '0'), _putchar((product / 10) % 10 + '0'), _putchar(product % 10 + '0');
		}
		_putchar('\n');
	}
}
