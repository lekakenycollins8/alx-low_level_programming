#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - Prints a name
 * @name: name to print
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	f(name);
}
