#include "main.h"
#include <stdio.h>
/**
  * append_text_to_file - function that appends text at the end of a file.
  * @filename: the name of the file
  * @text_content: the NULL terminated string to add at the end of the file
  * Return: Returns 1 on success and -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int append_file, length, write_stat;

	if (filename == NULL)
		return (-1);
	append_file = open(filename, O_WRONLY | O_APPEND);
	if (append_file == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (length = 0; text_content[length]; length++)
		;
	write_stat = write(append_file, text_content, length);
	close(append_file);
	return (write_stat == -1 ? -1 : 1);
}
