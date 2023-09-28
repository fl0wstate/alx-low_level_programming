#include "main.h"

/**
 * get_bit - retrieve a bit at a given position
 * @n: integer to get the bit from
 * @index: position of the targeted bit.
 *
 * Return: bit value at that position
 */
int get_bit(unsigned long n, unsigned int index)
{
	unsigned long int mask = 0x01;
	int r;


	/* set a bit field according to index */
	mask <<= index;
	if (index >= (sizeof(unsigned long int) * CHAR_BIT))
		return (-1);/* index val is invalid */

	r = ((n & mask) == 0) ? 0 : 1;/* check the bit val */
	return (r);
}