#include "main.h"
#include "2-strlen.c"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: Name of the file.
 * @text_content: String into the file.
 * Return: 1 if works, -1 if doesn't.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int out_write, out_open;

	if (filename == NULL)
	{
		return (-1);
	}

	out_open = open(filename, O_RDWR | O_APPEND, 0600);
	if (out_open == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		close(out_open);
		return (1);
	}

	out_write = write(out_open, text_content, _strlen(text_content));
	if (out_write == -1)
	{
		close(out_open);
		return (-1);
	}

	close(out_open);
	return (1);
}
