#include "main.h"

/**
 * flip_bits - counts the Number Of Bits To change .
 * to get from One Number To another one
 * @n:for the First Number
 * @m: for Second Number
 *
 * Return: Number of the bits to change it
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (b = 63; b >= 0; b--)
	{
		current = exclusive >> b;
		if (current & 1)
			count++;
	}

	return (count);
}

