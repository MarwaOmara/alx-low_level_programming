#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of adding positive numbers
 * @argc: the number of arguments
 * @argv: array of pointers to arguments
 * Retrun: 0 Always
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	char *m;

	while (--argc)
	{
		for (m = argv[argc]; *m; m++)
			if (*m < '0' || *m > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
