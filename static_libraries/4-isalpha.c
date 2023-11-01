#include "main.h"
#include <ctype.h>
/**
* _isalpha - Entry point
*
* @c: The character to check
* Description: Checks for upper and lowercase alphabetical characters
*
* Return: 1 for lowercase and 0 otherwise.
*/
int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
