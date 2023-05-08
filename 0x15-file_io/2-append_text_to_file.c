#include "main.h"

/**
 * append_text_to_file - appends at the end of a file
 * @filename: filename.
 * @text_content: its the content to be added
 *
 * Return: 1 on success and -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fh;
	int nletters;
	int wr;

	if (!filename)
		return (-1);

	fh = open(filename, O_WRONLY | O_APPEND);

	if (fh == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		wr = write(fh, text_content, nletters);

		if (wr == -1)
			return (-1);
	}

	close(fh);

	return (1);
}
