#include <stdio.h>

/**
 * main - Prints its name, followed by a new line
 * @argc: argument count
 * @argv: array of string containing argument
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
