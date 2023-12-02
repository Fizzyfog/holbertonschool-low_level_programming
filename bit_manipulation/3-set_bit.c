#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a given index
* @n: Bit being evaluated
* @index: index starting from 0 to wanted bit
* Return: 1 on success / -1 on error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	/* Unsigned long int = 64 bits in C. */

	if (index > 63)
		return (-1);

	/* Sets the bit at index to 1 using bitwise OR */
	*n = *n | 1 << index;
	return (1);
}
