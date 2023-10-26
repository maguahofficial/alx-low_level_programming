#include "main.h"

/**
 * print_binary - code that prints the binary equivalent of a decimal number
 * @n: number to print in binary
 * the 1-print_binary.c Bit manipulation task
 * Return: value of (base ^ power)
*/

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int numlongintvarble;
	unsigned int aintvarble;

	numlongintvarble = 1;
	for (aintvarble = 1; aintvarble <= power; aintvarble++)
		numlongintvarble *= base;

	return (numlongintvarble);
}

/**
 * print_binary - code that prints the binary equivalent of a decimal number
 * @n: number to print in binary
 *
 * Return: void
 * the 1-print_binary.c Bit manipulation task
 */

void print_binary(unsigned long int n)
{
	unsigned long int divisorlintvarble, checklintvarble;
	char flagcharvar;

	flagcharvar = 0;
	divisorlintvarble = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisorlintvarble != 0)
	{
		checklintvarble = n & divisorlintvarble;
		if (checklintvarble == divisorlintvarble)
		{
			flagcharvar = 1;
			_putchar('1');
		}
		else if (flagcharvar == 1 || divisorlintvarble == 1)
		{
			_putchar('0');
		}
		divisorlintvarble >>= 1;
	}
}
