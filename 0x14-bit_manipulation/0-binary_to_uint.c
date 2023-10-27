#include "main.h"

/**
 * binary_to_uint - code converts a binary number to a unsigned int
 * @b: the string containing the binary number
 * the 0-binary_to_uint.c Bit manipulation task
 * Return: returns the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int intvariable;
	unsigned int dec_valvariable = 0;

	if (!b)
		return (0);

	for (intvariable = 0; b[intvariable]; intvariable++)
	{
		if (b[intvariable] < '0' || b[intvariable] > '1')
			return (0);
		dec_valvariable = 2 * dec_valvariable + (b[intvariable] - '0');
	}

	return (dec_valvariable);
}
