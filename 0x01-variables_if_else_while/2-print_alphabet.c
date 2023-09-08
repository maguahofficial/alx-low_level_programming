
#include <stdio.h>

/*main - Prints the alphabet.*/
int main(void)
{
	
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int k;

	for (k = 0; k < 26; k++)
	{
		putchar(alp[k]);
	}
	putchar('\n');
	return (0);
}
