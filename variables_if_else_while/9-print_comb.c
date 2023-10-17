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
	int digit = 0;

	while (digit <= 9)
	{
		if (digit > 0)
		{

			putchar(',');
			putchar(' ');
		}

		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
