#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * printErrorAndExit - Prints error
 * Return: void
 */

void printErrorAndExit()
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
}

/**
 * main - Multiplies two positive integers
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	char *num1 = argv[1];
	char *num2 = argv[2];
	int NUM1;
	int NUM2;
	long result;
	char buffer[20];
	int length = 0;
	int i;

	if (argc !=3)
	{
		printErrorAndExit();
	}
	for (i = 0; num1[i] != '\0'; i++)
	{
		if (!isdigit(num1[i]))
		{
			printErrorAndExit();
		}
	}
	for (i = 0; num2[i] != '\0'; i++)
	{
		if (!isdigit(num2[i]))
		{
			printErrorAndExit();
		}
	}
	NUM1 = atoi(num1);
	NUM2 = atoi(num2);
	result = (long)NUM1 * NUM2;

	if (result < 0)
	{
		_putchar('-');
		result = -result;
	}
	if (result == 0)
	{
		_putchar('0');
	}
	else
	{
		while (result > 0)
		{
			buffer[length] = (result % 10) + '0';
			result /= 10;
			length++;
		}
		for (i = length - 1; i >= 0; i--)
		{
			_putchar(buffer[i]);
		}
	}
	_putchar('\n');
	return (0);
}
