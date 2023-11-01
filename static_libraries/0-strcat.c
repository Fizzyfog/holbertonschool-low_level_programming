#include "main.h"

/**
* _strcat - Concatenates two strings
* @dest: destination string
* @src: source string
*
* Return: Char pointer to concatenated string
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;

	while (src[j])
		dest[i++] = src[j++];
	dest[i] = src[j];

	return (dest);
}
