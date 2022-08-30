#include "main.h"

/**
 * read_textfile - read textfile and print s it to the POSIX standard output
 * @filename: textfile to be read
 * @letters: number of letters to be read and printed
 * Return: number of letters read and printed,
 * return 0 if file cannot be opened or read, filename is NULL,
 * write fails or does not write the amount of bytes expected
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_wr, num_rd;
	int fd;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
		return (0);
	num_rd = read(fd, buf, letters);
	close(fd);

	num_wr = write(STDOUT_FILENO, buf, num_rd);
	if (num_wr < 0 || num_wr != num_rd)
		return (0);
	free(buf);

	return (num_wr);
}
