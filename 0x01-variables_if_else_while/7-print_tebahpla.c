#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
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
