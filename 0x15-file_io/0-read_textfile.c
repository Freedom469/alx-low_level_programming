#include "main.h"



/**
* read_textfile - function that reads a text file and prints it to the POSIX
*  standard output.
*  @filename: pinter to the file to be read.
*  @letters: number of bytes in the filename
*  Return: Number of lettere to be printed
*/

ssize_t read_textfile(const char *filename, size_t letters)

{

	ssize_t fp;

	char *buf;

	ssize_t read_txt, out_write;



	if (!filename)

		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)

		return (0);

	buf = malloc(sizeof(char) * letters);

	if (!buf)

		return (0);

	read_txt = read(fp, buf, letters);

	out_write = write(STDOUT_FILENO, buf, read_txt);

	close(fp);

	free(buf);

	return (out_write);

}
