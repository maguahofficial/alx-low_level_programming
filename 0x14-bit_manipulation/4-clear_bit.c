#include "main.h"


/**
 * clear_bit - the code sets the value of a given bit to 0
 * @n: pointer to number to change
 * @index: the index of the bit to clear
 * the 4-clear_bit.c Bit manipulation task
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);

	return (1);
}
