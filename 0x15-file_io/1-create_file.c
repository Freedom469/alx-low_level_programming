#include "main.h"



/**
* create_file - fuction that creates a file
* @filename: pointer to the file to be created
* @text_content: pointer to NULL terminated string to write to the file
* Return: NULL terminated string to write to the file
*/

int create_file(const char *filename, char *text_content)

{

	int fd;



	if (!filename)

		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd != -1)

	{

		write(fd, text_content, sizeof(text_content));

		return (1);

	}

	close(fd);

	return (-1);

}
