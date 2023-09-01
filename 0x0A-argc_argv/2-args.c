#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: argument count
 * @argv: array of strings containing argument
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
