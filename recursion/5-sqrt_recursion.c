#include "main.h"

/**
* sqrt_helper - finds the root of n
* @n: number
* @root: tested root
*
* Return: natural square root, else -1
*/

int sqrt_helper(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (sqrt_helper(n, root + 1));
}

/**
* _sqrt_recursion - returns the natural square root of n
* @n: number
*
* Return: square root of integer n
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_helper(n, 0));
}
