#include "main.h"

/**
 * flip_bits - Gets the number of bits needed to flip to change one number
 * to another.
 *
 * @n: First number.
 * @m: Second number.
 *
 * Return: Number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int diff = n ^ m;

	while (diff > 0)
	{
		count += (diff & 1);
		diff >>= 1;
	}

	return (count);
}
