#include "main.h"

/**
 * _strlen - Gets the length of a string
 * @s: Input string being evaluated
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int index =  0;
    /* Loop through string until NULL char is found */
	while (*(s + index))
		++index;
	return (index);
}

/**
 * create_file - Creates a file
 * @filename: Name of file to create
 * @text_content: NULL terminated string to write
 *
 * Return: 1 on success
 * -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fileDescrpt;

	if (!filename)
		return (-1);
    /* Open or create file with rw------- permissions */
	fileDescrpt = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    /* Return 1 if text_content is NULL (create empty file)*/
	if (!text_content)
		return (1);
    /* Write text_content to file, return -1 if fail.*/
	if (write(fileDescrpt, text_content, _strlen(text_content)) == -1)
		return (-1);

	close(fileDescrpt);
	return (1);
}
