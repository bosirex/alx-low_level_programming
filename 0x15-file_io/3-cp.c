#include "main.h"
#include <stdio.h>

int error_close(int file_descriptor);
void error_read(char *file_name);
void error_write(char *file_name);

/**
 * main - copies the content of a file to another file.
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: always return 0, or exit.
 */
int main(int argc, char *argv[])
{
	char buf[1024];
	int filefrom, fileto;
	ssize_t byte_count = 1;

	/* check number of argument */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* open and check fd for file_from */
	filefrom = open(argv[1], O_RDONLY);
	if (filefrom < 0)
	{
		error_read(argv[1]);
		exit(98);
	}
	/* open and check fd for file_to */
	fileto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fileto < 0)
	{
		error_write(argv[2]);
		error_close(fd_file_from);
		exit(99);
	}

	/* copy content - loop checks end of file (file_from) */
	while (byte_count)
	{
		/* read the next 1020 bytes in file_from and check read error */
		byte_count = read(filefrom, buf, 1024);
		if (byte_count < 0)
		{
			error_read(argv[1]);
			error_close(filefrom);
			error_close(fileto);
			exit(98);
		}
		/* check buffer end of file */
		if (byte_count == 0)
			break;
		/* write the output in file_to and check write error */
		byte_count = write(fileto, buf, byte_count);
		if (byte_count < 0)
		{
			error_write(argv[2]);
			error_close(filefrom);
			error_close(fileto);
			exit(99);
		}
	}

	/* close and check fd for file_from and file_to */
	if (error_close(filefrom) < 0)
	{
		error_close(fileto);
		exit(100);
	}
	if (error_close(fileto) < 0)
		exit(100);
	return (0);
}

/**
 * close_error - close a file descriptor and check for a possible error.
 * @fd: file descriptor for file to be closed.
 * Return: 1 if fd colud be closeed, -1 if fd could not be closed.
 */
int error_close(int file_descriptor)
{
	int close_output;

	close_output = close(file_descrip);
	if (close_output < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	return (close_output);
}

/**
 * read_error - print the read error.
 * @filename: filename.
 */
void error_read(char *file_name)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
}

/**
 * write_error - print the write error.
 * @filename: filename.
 */
void error_write(char *file_name)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
}
