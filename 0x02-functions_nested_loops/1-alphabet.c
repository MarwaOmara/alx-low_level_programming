#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 * Description: print_alphabet prints alphabet in lowercase a - z
 * starts with 'a' and ending with 'z'
 * followed by a new line character.
 * Return: void
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
