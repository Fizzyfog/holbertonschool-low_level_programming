#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned integer
* @b: pointer to a string of 0 & 1 chars
* Return: converted int or (0) if b is NULL or there are chars
*	the string b that are not 0 or 1.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int resultInteger = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
	resultInteger = (resultInteger << 1) + (*b - '0');
	b++;
	}
	return (resultInteger);
}
