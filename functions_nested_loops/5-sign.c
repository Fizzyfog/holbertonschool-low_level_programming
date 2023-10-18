#include "main.h"

/**
* print_sign - Entry point
*
* @n: The number to check
* Description: Prints the sign (+,- or 0) of a number
*
* Return: 1 if positive, 0 if 0, -1 if negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
