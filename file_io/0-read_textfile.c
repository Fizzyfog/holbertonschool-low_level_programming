#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Pointer to address of text file
 * @letters: Number of letters to read and print
 *
 * Return: Actual number of letters read and printed
 * 0 if filename is NULL
 * 0 if write fails or does not write expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDescriptor = open(filename, O_RDONLY);
	ssize_t bytesRead;
    /* Allocate memory for buffer */
	char *buffer = malloc(sizeof(char) * letters + 1);

    /* check if file opened and buffer allocated successfully */
	if (fileDescriptor == -1 || !filename || !buffer)
		return (0);
    /* Read letters from file into buffer*/
	bytesRead = read(fileDescriptor, buffer, letters);
	if (bytesRead == -1)
		return (0);
    /* null char at end of buffer index creates string valid in C language*/
	buffer[bytesRead] = '\0';

    /* Write buffer to standard output */
	bytesRead = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesRead == -1)
		return (0);

	close(fileDescriptor);
	free(buffer);

	return (bytesRead);
}
