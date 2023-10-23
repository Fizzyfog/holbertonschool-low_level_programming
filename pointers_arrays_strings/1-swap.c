#include "main.h"

/**
* swap_int - swaps the values of two intergers
* @a: first integer swapped
* @b: second integer swapped
*/
void swap_int(int *a, int *b)
{
	int val = *a;
	*a = *b;
	*b = val;
}
