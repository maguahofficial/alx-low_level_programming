#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
*/
int main(void)
{
	char sh;

	for (sh = 'z'; sh >= 'a'; sh--)
	{
		putchar(sh);
	}
	putchar('\n');
	return (0);
}
