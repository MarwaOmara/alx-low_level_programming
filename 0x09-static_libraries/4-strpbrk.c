#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of byte
 * @s: string
 * @accept: accepts the string that matches
 * Return: Pointer to the byte in string
*/

char *_strpbrk(char *s, char *accept)
{
	int m, o;
	char *pointer;

	m = 0;
	while (s[m] != '\0')
	{
		o = 0;
		while (accept[o] != '\0')
		{
			if (accept[o] == s[m])
			{
				pointer = &s[m];
				return (pointer);
			}
			o++;
		}
		m++;
	}
	return (0);
}
