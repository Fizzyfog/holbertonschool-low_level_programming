#include "main.h"
/**
* print_diagonal - draws a diagonal line on the terminal
* @n: number of \ to draw
*
* Return: Always 0
*/
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');

	else
		{
			while (n > 0)
			{
				_putchar('\\');
				_putchar('\n');
				n--;
			}
		}
}
