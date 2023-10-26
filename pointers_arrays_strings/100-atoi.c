#include "main.h"
#include <stdio.h>

/**
* _atoi - Converts a string to an integer
* @s: the string to convert
*
* Return: an integer
*/
int _atoi(char *s)
{
	int convert = 0;
	int i = 0;

	while (s[i] == ' ' || s[i] <= 0)
		i++;

	while (s[i] >= '0' && s[i] <= '9')
	{
		convert *= 10 + (s[i] - '0');
		i++;
	}

	if (convert < 0)
		return (convert * -1);

	else
		return (convert);
}
