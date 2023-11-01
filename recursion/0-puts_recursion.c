#include "main.h"

/**
* _puts_recursion - writes a string with recursion
* @s: The string to print
*
* Return: Always 0
*/

void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
		_putchar(*s);
		_puts_recursion(s + 1);
}
