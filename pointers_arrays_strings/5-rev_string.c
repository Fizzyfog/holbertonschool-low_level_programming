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
* rev_string - Reverses a string
* @s: The string to reverse
*
* Return: void
*/
void rev_string(char *s)
{
	int length = _strlen(s);
	int start = 0;
	int end = length - 1;
	char tmp;

	while (start < end)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;

		start++;
		end--;
	}
}
