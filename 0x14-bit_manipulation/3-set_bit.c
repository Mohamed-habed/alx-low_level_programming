#include "main.h"

/**
 * set_bit - sets a Bit at a given index to 1 .
 * @n: Pointer To the Number for change
 * @index: Index Of The Bit to set to 1
 *
 * Return: -1 for failure , 1 for success .
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

