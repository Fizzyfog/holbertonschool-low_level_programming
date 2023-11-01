#include "main.h"

/**
*is_prime_number - checks if n is prime number
*@n: integer
*Return: 1 if prime number, 0 if not
*/

int is_prime_number(int n)
{
	if (n <= 1 || n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
		return (0);

	return (1);
}
