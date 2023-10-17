#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints all single digit numbers of base 10 starting from 0
*
* Return: Always 0 (success)
*/
int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		printf("%d\n", digit);
		digit++;
	}

	return (0);
}
