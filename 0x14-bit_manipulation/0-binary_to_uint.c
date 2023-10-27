#include "main.h"

/**
 * binary_to_uint - code converts a binary number to a unsigned int
 * @b: the string containing the binary number
 * the 0-binary_to_uint.c Bit manipulation task
 * Return: returns the converted number
 */
/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int aintvarble;
	unsigned int numusintvarble;

	numusintvarble = 0;
	if (!b)
		return (0);
	for (aintvarble = 0; b[aintvarble] != '\0'; aintvarble++)
	{
		if (b[aintvarble] != '0' && b[aintvarble] != '1')
			return (0);
	}
	for (aintvarble = 0; b[aintvarble] != '\0'; aintvarble++)
	{
		numusintvarble <<= 1;
		if (b[aintvarble] == '1')
			numusintvarble += 1;
	}
	return (numusintvarble);
}

