#include "main.h"

/**
 * append_text_to_file - code that appends text at end of a file.
 * @filename: pointer to the name of the file.
 * @text_content: string to add to the end of the file.
 *
 * Return: returns if the function fails or the filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 * 2-append_text_to_file.c file in the 0x15. C - File I/O task
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ointvar, wintvarble, lenvarble = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenvarble = 0; text_content[lenvarble];)
			lenvarble++;
	}

	ointvar = open(filename, O_WRONLY | O_APPEND);
	wintvarble = write(ointvar, text_content, lenvarble);

	if (ointvar == -1 || wintvarble == -1)
		return (-1);

	close(ointvar);

	return (1);
}
