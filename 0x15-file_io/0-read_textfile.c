#include "main.h"

/**
  *read_textfile - Function that reads the text file
  *@filename: Pointer to the path of the file
  *@letters: Letters that is should read and prints
  *Return:Actual number of letters it could read and write
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t Rbytes, Writebytes;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = (char *) malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	/*Read from file into the buffer*/
	Rbytes = fread(buffer, sizeof(char), letters, file);
	if (Rbytes < 0)
	{
		fclose(file);
		return (0);
	}

	/*Write already read bytes*/
	Writebytes = fwrite(buffer, sizeof(char), Rbytes, stdout);
	if (Writebytes != Rbytes)
	{
		fclose(file);
		return (0);
	}
	fclose(file);
	free(buffer);
	return (Rbytes);

}











