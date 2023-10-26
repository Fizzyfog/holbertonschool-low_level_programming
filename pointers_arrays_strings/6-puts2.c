#include "main.h"

/**
* _strlen - Returns the length of a string
* @s : The string to measure
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

/**
* puts2 - Prints every other char of a string
* @str: The string to check
*/
void puts2(char *str)
{
	int i;
	int length = _strlen(str);

	for (i = 0; i < length; i += 2)

	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
