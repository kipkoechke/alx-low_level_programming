#include "main.h"
/**
  * create_file - function that creates a file.
  * @filename: the name of the file to create
  * @text_content: NULL terminated string to write to the file
  * Return: Returns 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int latest_file, length, write_stat;

	if (filename == NULL)
		return (-1);
	latest_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (latest_file == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(latest_file);
		return (1);
	}
	for (length = 0; text_content[length]; length++)
		;
	write_stat = write(latest_file, text_content, length);
	if (close(latest_file) == -1)
		return (-1);
	return (write_stat == -1 ? -1 : 1);
}
