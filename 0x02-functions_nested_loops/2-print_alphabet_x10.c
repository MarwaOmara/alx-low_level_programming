#include "main.h"

/**
 * print_alphabet_x10 - finction prints the alphabet 10 times.
 * Description: print_alphabet will print alphabet in lowercase
 * it will be followed by a new line.
 *
 * Return: Always 0.
*/
void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
