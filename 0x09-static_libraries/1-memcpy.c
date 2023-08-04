#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area to be copied to
 * @src: source
 * @n: the length of the source to be copied
 * Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
