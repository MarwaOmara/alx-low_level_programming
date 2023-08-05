#include <stdio.h>

/**
 * main - prints number of arguments passed into the program
 * @argc: int
 * @argv: list
 * Return: 0 Success
*/

int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%d\n", argv[i]);
		i++;
	}
	return (0);
}
