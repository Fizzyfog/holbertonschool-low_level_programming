#include "main.h"

/**
* print_rev - prints a string in reverse then a newline
*
*@s: string reversed
*/
void print_rev(char *s)
{
	int strLength = 0;

	while (s[strLength] != '\0')
		strLength++;

	while (strLength)
		_putchar(s[--strLength]);

	_putchar ('\n');
}
