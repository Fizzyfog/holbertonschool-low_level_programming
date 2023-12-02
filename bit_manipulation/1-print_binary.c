#include "main.h"

/**
* print_binary - prints the binary representation of a number
* @n: integer to be printed in binary
*
*/
void print_binary(unsigned long int n)
{
	int counter, storedBits = 0;
	unsigned long int temp = n, bitValue;

	while (temp >>= 1)
		storedBits++;

	for (counter = storedBits; counter >= 0; counter--)
	{
		bitValue = (n >> counter) & 1;

		if (bitValue == 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
