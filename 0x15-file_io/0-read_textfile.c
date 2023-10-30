#include "main.h"
#include <stdlib.h>


/**
 * read_textfile- code Reads a text file and prints to STDOUT.
 * @filename: text file being read
 * @letters: the number of letters to be read
 * Return: w- returns the actual number of bytes read and printed
 * 0 when the function fails or filename is NULL.
 * 0-read_textfile.c file in the 0x15. C - File I/O task
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufvariable;
	ssize_t fdvarble;
	ssize_t wvarble;
	ssize_t tvarble;

	fdvarble = open(filename, O_RDONLY);
	if (fdvarble == -1)
		return (0);

	bufvariable = malloc(sizeof(char) * letters);
	tvarble = read(fdvarble, bufvariable, letters);
	wvarble = write(STDOUT_FILENO, bufvariable, tvarble);

	free(bufvariable);
	close(fdvarble);
	return (wvarble);
}
