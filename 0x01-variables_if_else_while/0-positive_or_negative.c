#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main entry
 *
 * Description: a program that determine if a random number is posisitve or negative
 *
 * Retrurn 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is a positive\n", n);
	else if (n == 0)
		printf("%i is a zero\n", n);
	else
		printf("%i is a negative\n", n);
	return (0);
}
