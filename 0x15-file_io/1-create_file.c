#include "main.h"

/**
 * create_file - it creates a file
 * @filename: filename.
 * @text_content: content writed into the file.
 *
 * Return: 1 on success and -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int fh;
	int nletters;
	int wr;

	if (!filename)
		return (-1);

	fh = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fh == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	wr = write(fh, text_content, nletters);

	if (wr == -1)
		return (-1);

	close(fh);

	return (1);
}
