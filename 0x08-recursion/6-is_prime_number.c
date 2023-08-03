#include "main.h"

/**
 * is_prime_number -  returns 1 if the input integer is a prime number
 * @other: int
 * @n: int
 * Return: 0 or 1
*/

int check_prime(int n, int other);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check all number < n if prime
 * @n: int
 * @other: int
 * Return: 0 or 1
*/

int check_prime(int n, int other)
{
	if (other >= n && n >= 2)
		return (1);
	else if (n % other == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, other + 1));
}
