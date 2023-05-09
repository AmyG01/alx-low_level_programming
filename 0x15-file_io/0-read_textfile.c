#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file, print to POSIX STDOUT.
 * @filename: Text file being read
 * @letters: Number of letters to be read
 * Return: w - Actual number of bytes read and printed
 *        0 - When function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t o;
	ssize_t w;
	ssize_t r;

	o = open(filename, O_RDONLY);
	if (o == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(o, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(o);
	return (w);
}
