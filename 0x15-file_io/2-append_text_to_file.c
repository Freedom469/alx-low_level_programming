#include "main.h"



/**
* append_text_to_file - function that appends text at the end of a file
* @filename: pointer to name of the file
* @text_content: NULL terminated string to add at the end of the file
* Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)

{

	int fd, wrt;

	if (!filename)

		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd)

	{
		if (!text_content)

			return (-1);

		wrt = write(fd, text_content, sizeof(text_content));

		if (wrt == -1)

		{
			close(fd);

			return (-1);

		}

		close(fd);

		return (1);

	}

	close(fd);

	return (-1);

}
