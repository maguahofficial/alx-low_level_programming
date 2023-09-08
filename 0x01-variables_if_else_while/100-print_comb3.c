#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int s, m;

	for (s = 48; s <= 56; s++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > s)
			{
				putchar(s);
				putchar(m);
				if (s != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
