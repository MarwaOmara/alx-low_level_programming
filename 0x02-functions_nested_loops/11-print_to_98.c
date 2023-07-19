#include "main.h"

/**
 * print_to_98 - function prints natural numbers from n to 98
 * Description: it prints n to 98 counts separated by comma
 * followed by space and number should be printed in order
 * @n: input
*/

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
