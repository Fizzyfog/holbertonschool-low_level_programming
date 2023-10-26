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
* puts_half - Prints half of a string, followed by newline.
* @str: The string to check
*/
void puts_half(char *str)
{
	int i;
	int length = _strlen(str);

	for (i = (length + 1) / 2; i < length; i++)

	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
