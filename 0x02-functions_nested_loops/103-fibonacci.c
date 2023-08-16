#include <stdio.h>

/**
 * main - Entry point
 * Finds and prints the sum of even-valued terms
 * Return: 0 (success)
 */
int main(void)
{
	long first = 1, second = 2, next;
	long sum = 0;

	while (second <= 4000000)
	{
		if (second % 2 == 0)
		{
			sum += second;
		}
		next = first + second;
		first = second;
		second = next;
	}
	printf("%ld\n", sum);
	return (0);
}
