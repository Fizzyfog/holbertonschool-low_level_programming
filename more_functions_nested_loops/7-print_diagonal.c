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
			int space = 0;

			while (n > 0)
			{
				int i;

				for (i = 0; i < space; i++)
					_putchar(' ');
			}
			{
				_putchar('\\');
				_putchar('\n');
				space++;
				n--;
			}
		}
}
