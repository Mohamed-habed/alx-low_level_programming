#include "main.h"

/**
 * get_bit - returns the value of the bit at the index in the decimal Numbers
 * @n: number for search
 * @index: index of Bit
 *
 * Return: Value Of The Bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
	return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

