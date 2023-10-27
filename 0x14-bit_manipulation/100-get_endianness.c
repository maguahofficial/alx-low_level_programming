#include "main.h"

/**
 * get_endianness - code checks if a machine is little or big endian
 * Return: returns 0 for big and  1 for little
 * the 100-get_endianness.c Bit manipulation task
 */
int get_endianness(void)
{
	unsigned int iunsivarble = 1;
	char *ccharvarbls = (char *) &iunsivarble;

	return (*ccharvarbls);
}
