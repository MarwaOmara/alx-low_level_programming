#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of adding positive numbers
 * @argc: the number of arguments
 * @argv: array of pointers to arguments
 * Return: if any of the arguments are not positive, the function
 * prints an error message and returns 1
 * Otherwise, the function returns 0
**/
int main(int argc, char *argv[])
{
	int sum = 0;
	char *m;

	while (--argc)
	{
		for (m = argv[argc]; *m; m++)
			if (*m < '0' || *m > '9')
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
