#include "main.h"

/**
* jack_bauer - check the code
*
* Return: Always 0
*/
void jack_bauer(void)
{
	int tic, tac;

	for (tic = 0; tic < 24; tic++)
	{
		for (tac = 0; tac < 60; tac++)
		{
			_putchar((tic / 10) + '0');
			_putchar((tic % 10) + '0');
			_putchar(':');
			_putchar((tac / 10) + '0');
			_putchar((tac % 10) + '0');
			_putchar('\n');
		}
	}
}
