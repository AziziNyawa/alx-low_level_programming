#include "main.h"

/**
 * read_textfile - reads a next file and prints
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed if it fails 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fh;
	ssize_t rd, wr;
	char *buf;

	if (!filename)
		return (0);

	fh = open(filename, O_RDONLY);

	if (fh == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	rd = read(fh, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	close(fh);

	free(buf);

	return (wr);
}
