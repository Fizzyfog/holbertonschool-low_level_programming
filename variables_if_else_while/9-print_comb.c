#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints all combinations of single-digits
*
* Return: Always 0 (success)
*/
int main(void)
{
	int digit = '0';

	while (digit <= '9')
	{
		putchar(digit + '0');


		if (digit < '9')
		{

			putchar(',');
			putchar(' ');
		}

		digit++;
	}
	putchar('\n');

	return (0);
}
