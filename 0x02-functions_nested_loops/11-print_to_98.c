#include "main.h"

/**
 * print_to_98 - function prints natural numbers from n to 98
 * Description: it prints n to 98 counts separated by comma
 * followed by space and number should be printed in order
 * @n: input
*/

void print_to_98(int n)
{
	int count;

	for (n > 98)
		for (count = 0; count > 98; count--)
			printf("%d, ", count);
	else
		for (count = 0; count < 98; count++)
			printf("%d, ", count);
	printf("98\n");
}
