#include "main.h"
/**
* print_line - draws a straight line in the terminal
* @n: length of the line to draw
*
* Return: Always 0
*/
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}

	if (n <= 0)
	_putchar('\n');
}
