#include "main.h"

/**
 * create_file - code Creates a file.
 * @filename: pointer to the name of the file to create.
 * @text_content: pointer to a string to write to the file.
 *
 * Return: returns if the function fails - -1.
 * Otherwise - 1.
 * 1-create_file.c file in the 0x15. C - File I/O task
 */
int create_file(const char *filename, char *text_content)
{
	int fdvarble, wintvar, lenintvarble = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenintvarble = 0; text_content[lenintvarble];)
			lenintvarble++;
	}

	fdvarble = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wintvar = write(fdvarble, text_content, lenintvarble);

	if (fdvarble == -1 || wintvar == -1)
		return (-1);

	close(fdvarble);

	return (1);
}
