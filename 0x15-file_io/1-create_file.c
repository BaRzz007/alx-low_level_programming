#include "main.h"

/**
 * create_file - Creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to file
 * Return: 1 on success, -1 on failure
 * failure: file can not be created, file can not be written, write fails)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, str_len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC);
	if (fd < 0)
		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (fd < 0)
		return (fd);

	if (text_content == NULL)
		text_content = "\0";
	str_len = 0;
	while (text_content[str_len] != '\0')
		str_len++;

	fd = write(fd, text_content, str_len);
	if (fd < 0)
	{
		close(fd);
		return (fd);
	}
	close(fd);

	return (1);
}
