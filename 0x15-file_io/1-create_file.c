#include "main.h"
/**
 * create_file - creates a file.
 * @filename: Name of the file to create.
 * @text_content: string to write to the file and NULL if no entry.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, length;
	ssize_t writeText;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		length = 0;
		while (*(text_content + length) != '\0')
			length++;
		writeText = write(fd, text_content, length);
		if (writeText == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
