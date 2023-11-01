#include "main.h"

/**
* _strstr - Finds 1st occurence of a substring in other string
* @haystack: String checked
* @needle: Substring needing a match
*
* Return: Pointer to beginning of located substring or NULL
*/
char *_strstr(char *haystack, char *needle)
{
		int i;
		int j;

		if (*needle == '\0')
			return (haystack);

		for (i = 0; haystack[i]; i++)
		{
			if (haystack[i] == needle[0] && needle != (void *) 0)
			{
				for (j = 0; haystack[i] == needle[j]; i++, j++)

				if (needle[i] == '\0')

					return (haystack + (i - j));
			}

		}
	return (0);
}
