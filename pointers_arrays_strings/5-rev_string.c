#include "main.h"

/**
* _rev_string - reverses a string
* @s - string to be reversed
*
*/

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
void rev_string(char *s)
{
	int length = _strlen(s);
	int start = 0;
	int end = length - 1;

	while (start < end)
	{	start++;
		end--;
		s[start] = s[end];
	}
}
