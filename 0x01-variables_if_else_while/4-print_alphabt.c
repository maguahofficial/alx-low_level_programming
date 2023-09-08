#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Code Will Prints the alphabet without q and e.
*/
int main(void)
{
	int d;

	for (d = 97; d < 123; d++)
	{
		if (d != 101 && d != 113)
		{
			putchar(d);
		}
	}
	putchar('\n');
	return (0);
}
