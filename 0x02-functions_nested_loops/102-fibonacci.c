#include <stdio.h>

/**
 * main - Entry point
 * Prints first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0 (success)
 */
int main(void)
{
	int n = 50;
	unsigned long long int first = 1, second = 2, next;

	printf("%llu, %llu, ", first, second);

	for (int i = 3; i <= n; i++)
	{
		next = first + second;
		printf("%llu", next);

		if (i != n)
		{
			printf(", ");
		}
		first = second;
		second = next;
	}
	printf("\n");
	return (0);
}
