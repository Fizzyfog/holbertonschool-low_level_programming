#include "main.h"

/**
* _strcpy - Copies string pointed to by src
* @dest: Array copied to
* @src: String to copy
*
* Return: Value of pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
