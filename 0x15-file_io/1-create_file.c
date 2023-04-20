#include "main.h"

/**
  *create_file - Function that creates afile to a specified path
  *@filename: Pointer to the name of the file
  *@text_content: Null terminated string to write to the file
  *Return: 1 on succes or -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t Writebytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		Writebytes = write(fd, text_content, strlen(text_content));
		if (Writebytes == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
