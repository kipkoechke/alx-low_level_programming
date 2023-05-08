#include "main.h"
/**
  * read_textfile - function that reads a text file and prints it to
  * the POSIX standard output.
  * @filename: name of the file to read and print
  * @letters: the number of letters it should read and print
  * Return: returns the actual number of letters it could read and print
  **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int text_file, t, r_status;
	char buffer[BUFSIZE];

	if (filename == NULL)
		return (0);
	text_file = open(filename, O_RDONLY);
	if (text_file == -1)
		return (0);
	t = 0;
	r_status = 1;
	while (letters > BUFSIZE && r_status != 0)
	{
		r_status = read(text_file, buffer, BUFSIZE);
		write(STDOUT_FILENO, buffer, r_status);
		t += r_status;
		letters -= BUFSIZE;
	}
	r_status = read(text_file, buffer, letters);
	write(STDOUT_FILENO, buffer, r_status);
	t += r_status;
	close(text_file);
	return (t);
}
