#include "main.h"

/**
 * set_bit - code sets a bit at a given index to 1
 * @n: pointer to the number to change
 * @index: the index of the bit to set to 1
 *the 3-set_bit.c Bit manipulation task
 * Return: returns 1 if successfull, -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);

	return (1);
}
