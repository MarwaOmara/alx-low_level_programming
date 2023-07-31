#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: the string to search
 * @needle: the substring to search for
 *
 * Return: Pointer to the beginning of substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int m, o;

	if (!needle[0])
		return (haystack);
	for (m = 0; haystack[m]; m++)
	{
		for (j = 0; needle[o]; o++)
		{
			if (haystack[m + o] != needle[o])
				break;
		}
		if (!needle[o])
			return (haystack + m);
	}
	return (NULL);
}
