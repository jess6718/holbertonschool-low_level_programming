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
 * create_file - function that creates a file from text
 * @filename: name of file to create
 * @text_content: content for file
 *
 * Return: 1 for success, -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int num_written, fd;

	if (filename == NULL)
	{
		return (-1);
	}
	/* set permission of file created as rw------, trucate it if file existed*/
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		/* call _strlen to get number of text_content passed in*/
		num_written = write(fd, text_content, _strlen(text_content));
		if (num_written == -1) /*if write fails*/
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}


