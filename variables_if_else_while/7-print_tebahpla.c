#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints alphabet in reverse
*
* Return: Always 0 (success)
*/
int main(void)
{
	char letter = 'z';

	while (letter <= 'z')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');

	return (0);
}
