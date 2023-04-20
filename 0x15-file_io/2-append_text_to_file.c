#include "main.h"

/**
  *append_text_to_file - Function that appends the text to the new file
  *
  *@filename: Pointerr to filename
  *@text_content: The text content to append
  *Return: 1 on success or -1 on fail
  */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL || text_content == NULL)
		return (-1);
	file = fopen(filename, "a");
	if (file == NULL)
		return (-1);

	fprintf(file, "%s", text_content);
	fclose(file);
	return (1);

}
