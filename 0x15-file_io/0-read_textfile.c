#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: read text file
 * @letters: number of letters
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_descrip;
	ssize_t wrt;
	ssize_t rd;

	file_descrip = open(filename, O_RDONLY);
	if (file_descrip == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	rd = read(file_descrip, buffer, letters);
	wrt = write(STDOUT_FILENO, buffer, rd);

	free(buffer);
	close(file_descrip);
	return (wrt);
}
