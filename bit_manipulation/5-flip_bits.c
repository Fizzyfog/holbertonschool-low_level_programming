#include "main.h"

/**
 * flip_bits - Number of bits flipped to get from one number to another
 * @n: First integer
 * @m: Second integer
 *
 * Return: Number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
    /* XOR on n and m to find differing bits */
	n = n ^ m;

    /* loop until all bits in n have been checked */
	while (n)
	{
		if (n & 1)
			++counter;
		n = n >> 1;
	}

    /* Return number of bits that need to be flipped */
	return (counter);
}
