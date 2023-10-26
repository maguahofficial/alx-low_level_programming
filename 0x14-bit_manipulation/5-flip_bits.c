#include "main.h"


/**
 * flip_bits - the code counts the number of bits to change
 * to get from one number to another
 * @n: the first number
 * @m: the second number
 * the 5-flip_bits.c Bit manipulation task
 * Return: returns number of bits you want to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int ivarble, countintvarble = 0;
	unsigned long int currentLintvarble;
	unsigned long int exclusivevarble = n ^ m;

	for (ivarble = 63; ivarble >= 0; ivarble--)
	{
		currentLintvarble = exclusivevarble >> ivarble;
		if (currentLintvarble & 1)
			countintvarble++;
	}

	return (countintvarble);
}
