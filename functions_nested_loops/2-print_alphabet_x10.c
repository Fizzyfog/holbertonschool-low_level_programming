#include "main.h"
/**
* print_alphabet_x10 - Entry point
*
* Description: Prints alphabet ten times in lowercase, followed by newline
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{

		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

		i++;
		_putchar('\n');
	}
}
