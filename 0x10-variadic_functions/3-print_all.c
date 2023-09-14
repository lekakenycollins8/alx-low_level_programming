#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything
 * @format: list of types passed to argument
 */

void print_all(const char * const format, ...)
{
	char char_arg;
	int int_arg;
	double double_arg;
	char *string_arg;
	const char *current = format;
	int first_item = 1;

	va_list args;
	va_start(args, format);

	while (*current)
	{
		if (*current == 'c')
		{
			if (!first_item)
			{
				printf(", ");
			}
			char_arg = va_arg(args, int);

			printf("%c", char_arg);
		}
		else if (*current == 'i')
		{
			if (!first_item)
			{
				printf(", ");
			}
			int_arg = va_arg(args, int);

			printf("%d", int_arg);
		}
		else if (*current == 'f')
		{
			if (!first_item)
			{
				printf(", ");
			}
			double_arg = va_arg(args, double);

			printf("%f", double_arg);
		}
		else if (*current == 's')
		{
			if (!first_item)
			{
				printf(", ");
			}
			string_arg = va_arg(args, char *);

			if (string_arg != NULL)
			{
				printf("%s", string_arg);
			}
			else
			{
				printf("(nil)");
			}
		}
		else
		{
		}
		first_item = 0;
		current++;
	}
	printf("\n");
	va_end(args);
}
