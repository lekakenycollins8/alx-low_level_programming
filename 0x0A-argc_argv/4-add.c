#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds posive numbers
 * @argc: argument count
 * @argv: array of string containing argument
 * Return: always 0, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		int num =atoi(argv[i]);

		if (num == 0 && *argv[i] != '0')
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
