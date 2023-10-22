#include "main.h"
/**
* more_numbers - prints 10 times numbers 0 to 14
*
*Return: always (0)
*/
void more_numbers(void)
{
	int i = 0;
	int num;

	while (i <= 9)
	{
		num = 0;
		while (num <= 14)
		{
			if (num > 9)
			{
				_putchar(num / 10 + '0');
			}
			_putchar(num % 10 + '0');
			num++;
		}
		i++;
		_putchar('\n');
	}
}
