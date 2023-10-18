#include "main.h"

/**
* print_last_digit - Prints the last digit of an interger
*
* @n : The integer of which to print the last digit
*
* Return: value of the last digit
*/
int print_last_digit(int n)

{
	if ((n % 10) < 0)
		n *= -1;

	_putchar ((n % 10) + '0');
		return (n % 10);
}
