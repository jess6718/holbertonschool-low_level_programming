#include "main.h"

/**
 * read_textfile - reads a text file and prints to standard output
 * @filename:file to print
 * @letters: number of letters to print
 * Return: fail 0, success, number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{	int fd;
	ssize_t num_read;
	ssize_t num_written;
	char *buf;

	buf = malloc(sizeof(char) * letters); /*initialise buf*/
	if (buf == NULL)/*check whether malloc fails*/
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	num_read = read(fd, buf, letters);/*read file that is open,*/
	/*number of letters passed in*/
	if (num_read == -1)
	{
		return (0);
	}
	num_written = write(STDOUT_FILENO, buf, num_read);/*write what is read*/
	if (num_written == -1)
	{
		return (0);
	}
	close(fd);
	return (num_read);
	free(buf);
}
