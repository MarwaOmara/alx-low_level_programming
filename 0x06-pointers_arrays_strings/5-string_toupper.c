#include "main.h"

/**
 * string_toupper - Write a function that changes all lowercase
 * letters of a string to uppercase.
 * @str: This is the input string.
 * Return: Lowercase changed to uppercase of the string
*/

char *string_toupper(char *)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}

