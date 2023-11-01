#include "main.h"

/**
* _print_rev_recursion - prints a string in reverse with recursion
* @s: Pointer to the string to print
*
*/

void _print_rev_recursion(char *s)
{
	if (!*s)
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
