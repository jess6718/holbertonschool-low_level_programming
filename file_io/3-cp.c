#include"main.h"

/**
 * closefile - close fd
 * @fd: fd passed in
 * Return: void
*/
void closefile(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd ");
		exit(100);
	}
}

/**
 * ifexit98 - check read file success
 * @filename: file name
 * Return: void
*/
void ifexit98(char *filename)
{
	if (filename == NULL) /*file_from not exist*/
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
}

/**
 * main - copies a file
 * @argc: count of args
 * @argv: arr of args
 * Return: count of chars printed
*/
int main(int argc, char *argv[])
{
	int fd_from, fd_to, num_read, num_written;
	char buf[1024]; /*char array makes a pointer to start of mem location*/

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	ifexit98(argv[1]);
	fd_from = open(argv[1], O_RDONLY);
	ifexit98(fd_from);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1) /*if cannot create*/
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	num_read = read(fd_from, buf, 1024); /*read first 1024 char of file*/
	ifexit98(num_read);
	while (num_read != 0) /*read until end of the file*/
	{
		num_written = write(fd_to, buf, num_read);
		if (num_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		num_read = read(fd_from, buf, 1024); /*set num_read to next 1024 char*/
	}
	closefile(fd_from);
	closefile(fd_to);
	return (0);
}
