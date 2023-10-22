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
	{
		_putchar('\n');
	}
	else
	{
		int row, space;

		for (row = 0; row < n; row++)
		{
				for (space = 0; space < row; space++)
				{	
					 _putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');
		}
	}
}
