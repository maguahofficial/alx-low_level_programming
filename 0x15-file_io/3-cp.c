#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer_function(char *file);
void close_file_function(int fd);


/**
 * create_buffer_function - Code allocates 1024 bytes for a buffer.
 * @file: Name of the file buffer is storing chars for.
 *
 * Return: returns pointer to the newly-allocated buffer.
 * 3-cp.c file in the 0x15. C - File I/O task
 */
char *create_buffer_function(char *file)
{
	char *buffervarble;

	buffervarble = malloc(sizeof(char) * 1024);

	if (buffervarble == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffervarble);
}


/**
 * close_file_function - function closes file descriptors.
 * @fd: file descriptor to be closed.
 * 3-cp.c file in the 0x15. C - File I/O task
 */
void close_file_function(int fd)
{
	int cvariable;

	cvariable = close(fd);

	if (cvariable == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - function copies the contents of a file to another file.
 * @argc: number of arguments supplied to the program.
 * @argv:  array of pointers to the arguments.
 *
 * Return: returns 0 on success.
 *
 * 3-cp.c file in the 0x15. C - File I/O task
 */
int main(int argc, char *argv[])
{
	int fromintvarble, tointvar, rvariable, wvariable;
	char *buffercharvar;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffercharvar = create_buffer_function(argv[2]);
	fromintvarble = open(argv[1], O_RDONLY);
	rvariable = read(fromintvarble, buffercharvar, 1024);
	tointvar = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fromintvarble == -1 || rvariable == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffercharvar);
			exit(98);
		}

		wvariable = write(tointvar, buffercharvar, rvariable);

		if (tointvar == -1 || wvariable == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffercharvar);
			exit(99);
		}

		rvariable = read(fromintvarble, buffercharvar, 1024);
		tointvar = open(argv[2], O_WRONLY | O_APPEND);

	} while (rvariable > 0);

	free(buffercharvar);
	close_file_function(fromintvarble);
	close_file_function(tointvar);

	return (0);
}
