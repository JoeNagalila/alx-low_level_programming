#include "main.h"

/**
 * get_bit - Returns a bit at an index in a decimal number
 * @n: No. to search
 * @index: A bit index
 *
 * Return: A bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
