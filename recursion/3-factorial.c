#include "main.h"

/**
* factorial - Returns factorial of number
* @n: Number being evaluated
*
* Return: Factorial of number, -1 if negative
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);

	// Check if n == 0 (logical operator NOT)
	else if (!n)
		// if n == 0, return 1 (0! = 1 in maths convention)
		return (1);

	return (n * factorial(n - 1));
}
