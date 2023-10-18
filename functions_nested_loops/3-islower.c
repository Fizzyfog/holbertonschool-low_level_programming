#include "main.h"
#include <ctype.h>
/**
* _islower - Entry point
*
* @c: The character to check
* Description: Checks for lowercase characters
*
* Return: 1 for lowercase and 0 otherwise.
*/
int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
