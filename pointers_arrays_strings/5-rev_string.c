#include "main.h"

/**
* _strlen - Returns the length of a string
* @s : The string to measure
*
* Return: length of string
*/
/**
* rev_string - Reverses a string
* @s - string to reverse
*/
int _strlen(char *s)
{
	int strLength = 0;

	while (s[strLength] != '\0')
		strLength++;

	return (strLength);
}

void rev_string(char *s)
{
	int length = _strlen(s);
	int start = 0;
	int end = length - 1;

	while (start < end)
	{
		s[start] = s[end];
		start++;
		end--;
	}
}
