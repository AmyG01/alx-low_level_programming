#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to the POSIX.
 * @filename: Text file being read
 * @letters: Number of letters to be read
 * Return: w- Actual number of bytes read and printed
 *        0- When function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
        char *buf;
        ssize_t fd;
        ssize_t w;
        ssize_t t;

        o = open(filename, O_RDONLY);
        if (o == -1)
                return (0);
        buf = malloc(sizeof(char) * letters);
        t = read(o, buf, letters);
        w = write(STDOUT_FILENO, buf, t);

        free(buf);
        close(o);
        return (w);
}
