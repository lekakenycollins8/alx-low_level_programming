#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - print a character
 * args: va_list with the character to print as its next element
 * Return: number of bytes printed
 */

int print_char(va_list args)
{
	return (printf("%c", va_arg(args, int)));
}

/**
 * print_float - Print a float
 * @args: va_list with the float to print as its next element
 * Return: the number of bytes printed
 */

int print_float(va_list args)
{
	return (printf("%f", va_arg(args, double)));
}

/**
 * print_int - Print an integer
 * @args: va_list with the integer to print as its next element
 * Return: the number of bytes printed
 */

int print_int(va_list args)
{
	return (printf("%i", va_arg(args, int)));
}

/**
 * print_str - print a string
 * @args: the va_list with the string to print as it's next element
 *
 * Return: the number of bytes printed
 */
int print_str(va_list args)
{
	const char *str = va_arg(args, const char *);

	if (!str)
	{
		str = "(nil)";
	}
	return (printf("%s", str));
}

/**
 * print_all - print anything
 * @format: a format string listing the types of the proceeding arguments
 * @...: the values to print
 */
void print_all(const char * const format, ...)
{
	const char *current = format;
	int first_item = 1;

	va_list args;

	va_start(args, format);

	while (*current)
	{
		if (!first_item)
		{
			printf(", ");
		}
		switch (*current)
		{
			case 'c':
				print_char(args);
				break;
			case 'f':
				print_float(args);
				break;
			case 'i':
				print_int(args);
				break;
			case 's':
				print_str(args);
				break;
			default:
			break;
		}
		first_item = 0;
		current ++;
	}
	va_end(args);
	printf("\n");
}

