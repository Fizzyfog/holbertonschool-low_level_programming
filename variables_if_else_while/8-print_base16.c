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
	char num = '0', letter = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	while (letter >= 'a')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
