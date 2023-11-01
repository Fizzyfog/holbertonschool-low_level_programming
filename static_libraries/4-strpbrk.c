#include "main.h"

/**
* _strpbrk - Locates 1st occurence of a string's bytes in another string
* @s: String checked
* @accept: Bytes being matched
*
* Return: Pointer to the byte in s or NULL
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; ++i)
	{
		for (j = 0; accept[j]; ++j)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}
