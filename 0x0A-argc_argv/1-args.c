#include <stdio.h>

/**
 * main - Prints the number of arguments passed to it
 * @argc: argument count
 * @argv: array of strings containing arguments
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
