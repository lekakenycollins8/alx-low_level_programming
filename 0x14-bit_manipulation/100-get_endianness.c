#include "main.h"

/**
 * get_endianness - Checks the endianness 
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
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
