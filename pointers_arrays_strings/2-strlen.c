#include "main.h"

/**
* _strlen - returns length of a string
* @s : string variable
*
* Return: length of string
*/
int _strlen(char *s)
{
	int strLength = 0;

	while (s[strLength] != '\0')
		strLength++;

	return (strLength);
}
