#include "main.h"

/**
 * get_endianness - checks If a Machine Is Little Or Big endian.
 * Return: 0 For The Big, 1 for The Little 
 */
int get_endianness(void)
{
	unsigned int A = 1;
	char *c = (char *) &A;

	return (*c);
}

