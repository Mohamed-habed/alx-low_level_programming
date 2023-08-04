#include "main.h"

/**
 * clear_bit - sets the value of a given the Bit to 0 .
 * @n: pointer to the Number To change.
 * @index: index of The Bit To Clear
 *
 * Return: -1 for failure ,  1 for success .
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

