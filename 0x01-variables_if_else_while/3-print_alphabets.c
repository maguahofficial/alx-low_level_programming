#include <stdio.h>

/**
 * main - Prints the alphabet.
 */
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int s;

	for (s = 0; s < 52; s++)
	{
		putchar(alp[s]);
	}
	putchar('\n');
	return (0);
}
