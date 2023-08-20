#include "main.h"

/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * @str: string
 * Return: 0 or NULL
*/

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;

	| p = malloc(size * sizeof(*str) + 1);

	if (m == 0)
		return (NULL);

	else
	{
		for (; i  < size; i++)
			p[i] = str[i];
	}
	return (p);
}
