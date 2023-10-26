#include "main.h"


/**
 * get_bit - code returns the value of a bit at an index in a decimal number
 * @n: the number to search
 * @index: index of the bit
 * the 2-get_bit.c Bit manipulation task
 * Return: returns the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_valuevariable;

	if (index > 63)
		return (-1);

	bit_valuevariable = (n >> index) & 1;

	return (bit_valuevariable);
}
