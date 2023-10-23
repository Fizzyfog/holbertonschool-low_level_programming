#include "main.h"

/**
* _puts - prints a string then newline, to stdout
*
*@str: string printed
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i] != '\0');
		i++;
	}
	_putchar ('\n');
}
