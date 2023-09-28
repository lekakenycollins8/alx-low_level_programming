#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	union 
	{
		int integer;
		char byte[sizeof(int)];
	} test;

	test.integer = 1;

	if (test.byte[0] == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
