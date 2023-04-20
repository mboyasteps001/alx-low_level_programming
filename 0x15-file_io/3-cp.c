#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#define BUFFER 1024
/**
  *main - Program copy contents from one file to another
  *@argc: Command line arguments counter
  *@argv: Pointer to array of arguments
  *Return: Always 0
  */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, nread;
	char buffer[BUFFER];

	/*Checks for the correct number of arguments*/
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to", argv[0]);
		exit(97);
	}
	/*Open the source file*/
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read form file %s\n", argv[1]);
		exit(98);
	}

	/*Open the destination file*/
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	/*Copy content from the existing fileto the destinated file*/
	while ((nread = read(fd_from, buffer, BUFFER)) > 0)
	{
		if (write(fd_to, buffer, nread) != nread)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	/*Checking for read errors*/
	if (nread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/*Close the file descriptors*/
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", errno);
		exit(100);
	}

	return (0);
}
