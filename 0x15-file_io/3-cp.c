#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - function entry point
  * @ac: the number argument count
  * @av: an array of argument number tokens
  * Return: Returns 0
  */
int main(int ac, char *av[])
{
	int fd_from, fd_to, read_stat, write_stat;
	mode_t perm = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
	char buffer[BUFSIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, perm);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	read_stat = 1;
	while (read_stat)
	{
		read_stat = read(fd_from, buffer, BUFSIZE);
		if (read_stat == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (read_stat > 0)
		{
			write_stat = write(fd_to, buffer, read_stat);
			if (write_stat != read_stat || write_stat == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}
