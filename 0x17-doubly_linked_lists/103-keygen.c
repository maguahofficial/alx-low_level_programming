#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Function generates and prints passwords for the crackme5 executable.
 * @argc: Number of arguments supplied to the program.
 * @argv: (array)An array of pointers to the arguments.
 * Doubly linked lists 102 task
 * Return: This always returns 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char passwordvrble[7], *codexvrb;
	int lenvrble = strlen(argv[1]), ivrble, tmpvrble;

	codexvrb = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tmpvrble = (lenvrble ^ 59) & 63;
	passwordvrble[0] = codexvrb[tmpvrble];

	tmpvrble = 0;
	for (ivrble = 0; ivrble < lenvrble; ivrble++)
		tmpvrble += argv[1][ivrble];
	passwordvrble[1] = codexvrb[(tmpvrble ^ 79) & 63];

	tmpvrble = 1;
	for (ivrble = 0; ivrble < lenvrble; ivrble++)
		tmpvrble *= argv[1][ivrble];
	passwordvrble[2] = codexvrb[(tmpvrble ^ 85) & 63];

	tmpvrble = 0;
	for (ivrble = 0; ivrble < lenvrble; ivrble++)
	{
		if (argv[1][ivrble] > tmpvrble)
			tmpvrble = argv[1][ivrble];
	}
	srand(tmpvrble ^ 14);
	passwordvrble[3] = codexvrb[rand() & 63];

	tmpvrble = 0;
	for (ivrble = 0; ivrble < lenvrble; ivrble++)
		tmpvrble += (argv[1][ivrble] * argv[1][ivrble]);
	passwordvrble[4] = codexvrb[(tmpvrble ^ 239) & 63];

	for (ivrble = 0; ivrble < argv[1][0]; ivrble++)
		tmpvrble = rand();
	passwordvrble[5] = codexvrb[(tmpvrble ^ 229) & 63];

	passwordvrble[6] = '\0';
	printf("%s", passwordvrble);
	return (0);
}
