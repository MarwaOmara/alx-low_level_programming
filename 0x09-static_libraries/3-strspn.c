#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string
 * @accept: bytes
 * Return: unsigned itn m
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int m, o;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (o = 0; accept[o] != s[m]; o++)
		{
			if (accept[o] == '\0')
				return (m);
		}
	}
	return (m);
}
