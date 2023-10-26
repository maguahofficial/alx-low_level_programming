#include <unistd.h>

/**
 * _putchar - code writes the character c to stdout
 * @c: The character to print
 *_putchar.c file Bit manipulation task
 * Return: if successfull it will return 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
