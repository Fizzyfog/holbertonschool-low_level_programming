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
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file
 * @text_content: NULL terminated string to add at the end of file
 *
 * Return: 1 on success
 * -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileDescrpt;

	if (!filename)
		return (-1);

    /* Open the file in append mode */
	fileDescrpt = open(filename, O_WRONLY | O_APPEND);

    /* if texte_content NULL, return 1 (success)*/
	if (!text_content)
		return (1);
       /*Write text_content to the end of file */
	if (write(fileDescrpt, text_content, _strlen(text_content)) == -1)
		return (-1);

	close(fileDescrpt);
	return (1);
}
