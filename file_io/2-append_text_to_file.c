#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
/**
* _strlen - return length of string
* @s: pointer to char of string
* Return: value of strlen length
**/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}

/**
 * append_text_to_file - append text to end of file
 * @filename: file to append
 * @text_content: test to be appended
 * Return: success 1, fail -1
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int num_written, fd;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1) /*file does not exist*/
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		num_written = write(fd, text_content, _strlen(text_content));
		if (num_written == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
