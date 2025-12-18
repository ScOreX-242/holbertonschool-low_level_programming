#include "main.h"

/**
 * check_sqrt - Helper function to find the square root recursively.
 * @i: The current number to check (iterator).
 * @n: The number to find the square root of.
 *
 * Return: The natural square root if found, or -1 if not found.
 */
int check_sqrt(int i, int n)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (check_sqrt(i + 1, n));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The integer to find the square root of.
 *
 * Return: The natural square root of n, or -1 if n does not have one.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (check_sqrt(0, n));
}
