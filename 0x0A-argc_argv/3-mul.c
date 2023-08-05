#include <stdio.h>

/**
 * main - prints sum of 2 number
 * @argc: number of arguments
 * @argv: poiner to an array of arguments
 * @num1: first number
 * @num2: second number
 * @product: sum of the two numbers
 * Return: 0 Success, non-zero-fail
*/

int main(int argc, char *argv[]) {
if (argc != 3) {
printf("Error\n");
return 1;
}

int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
int product = num1 * num2;

printf("%d\n", product);
return 0;
}

