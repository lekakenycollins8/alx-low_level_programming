#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/**
 * union union_endianness - Union to inspect memory for endianness
 *
 * @integer: integer of the union
 * @byte: Byte array to inspect memory representation
 */
union union_endianness
{
	int integer;
	char byte[sizeof(int)];
} test;

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif /* MAIN_H */
