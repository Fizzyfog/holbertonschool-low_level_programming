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
	int length;
	int i = 0;

	while (*src++)
		i++;
	length = i;

	for (i = 0; i <= length; i++)
		dest[i] = src[i];

	return (dest);
}
