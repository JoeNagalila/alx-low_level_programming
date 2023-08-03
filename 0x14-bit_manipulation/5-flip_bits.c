#include "main.h"

/**
 * flip_bits - Counts the number of a bit
 * @n: 1st No.
 * @m: 2nd No.
 *
 * Return: No. of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
