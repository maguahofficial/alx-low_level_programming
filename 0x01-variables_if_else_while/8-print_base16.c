#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;

	for (d = 48; d < 58; d++)
	{
		putchar(d);
	}
	for (d = 97; d < 103; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
