#include "main.h"
#include <stdio.h>

/**
 * isLower - determines whether ascii is lowercase
 * @c: character
 * Return: 1 if true, 0 if false
*/

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - determines whether ascii is a delimiter
 * @c: Charater
 * Return: 1 if true, 0 if false
*/

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 *
 * Return: string with capitalized words
 */

char *cap_string(char *s)
{
char *ptr = s;
int found_delimiter = 1;

while (*s)
{
if (isdelimiter(*s))
found_delimiter = 1;
else if (islower(*s) && found_delimiter)
{
*s -= 32;
found_delimiter = 0;
}
else
found_delimiter = 0;
s++;
}
return (ptr);
}
