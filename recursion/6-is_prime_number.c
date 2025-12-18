#include "main.h"

/**
 * check_prime - Checks recursively if n divides by i.
 * @i: The iterator (divisor).
 * @n: The number to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int check_prime(int i, int n)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(i + 1, n));
}

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to check.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(2, n));
}
