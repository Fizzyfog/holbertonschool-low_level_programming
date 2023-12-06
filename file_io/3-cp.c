#include "main.h"

/**
 * main - Copies content of a file to another
 * @argc: Number of command line arguments
 * @argv: Array containing command line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sourceFile, destFile, status;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\status");
		exit(97);
	sourceFile = open(argv[1], O_RDONLY);
	if (sourceFile < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\status", argv[1]);
		exit(98);
	}
	destFile = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	while ((status = read(sourceFile, buffer, 1024)) > 0)
		if ((write(destFile, buffer, status)) != status || destFile < 0)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\status", argv[2]), exit(99);
	if (status < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\status", argv[1]);
		exit(98);
	}
	if (close(sourceFile))
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\status", sourceFile), exit(100);
	if (close(destFile))
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\status", destFile), exit(100);
	return (0);
}
