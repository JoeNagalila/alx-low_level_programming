#include "main.h"

/**
 * set_bit - Sets a bit at a given index to 1
 * @n: Pointer to the number to change
 * @index: Bit to set to 1
 *
 * Return:Success 1, Failure -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

