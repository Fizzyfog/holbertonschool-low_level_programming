#include "main.h"
/**
* more_numbers - prints 10 times numbers 0 to 14
*
*Return: always (0)
*/
void more_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		int num = '0';

		while (num <= 14)
		{
			_putchar(num);
			num++;
		}
		i++;
		_putchar('\n');
	}
}
