#include "main.h"

/**
* get_bit - returns the value of a bit at a given index
* @n: nb
* @index: index of the wanted bit
* Return: value of bit at index or -1 if error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int numberofBits, indexBit_value;

	numberofBits = sizeof(unsigned long int) * 8;

	if (index >= numberofBits)
		return (-1);

	indexBit_value = (n >> index) & 1;

	return (indexBit_value);
}
