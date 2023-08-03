#include "main.h"

/**
 * get_endianness - Checks if a machine is little or big
 * Return: Big 0, little 1
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

