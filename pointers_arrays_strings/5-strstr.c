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
		if (*needle == '\0')
			return (haystack);

		while (*haystack != '\0')
		{
			char *haystack_ptr = haystack;
			char *needle_ptr = needle;
		}
		while (*haystack_ptr == *needle_ptr && *needle_ptr != '\0')
		{
			haystack_ptr++;
			needle_ptr++;
		}

		if (*needle_ptr == '\0')

			return (haystack);

			haystack++;
		}

	return (NULL);
}
	}
	return (0);
}
