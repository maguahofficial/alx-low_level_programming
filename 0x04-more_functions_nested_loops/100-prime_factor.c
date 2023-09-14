#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n;
	long int maxx;
	long int i;

	n = 612852475143;
	maxx = -1;

	while (n % 2 == 0)
	{
		maxx = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			maxx = i;
			n = n / i;
		}
	}

	if (n > 2)
		maxx = n;

	printf("%ld\n", maxx);

	return (0);
}
