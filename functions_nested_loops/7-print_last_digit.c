/*
 * File: 7-print_last_digit.c
 * Auth: Amin Israfilov
 */

#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The integer whose last digit is to be processed.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n % 10;
		n *= -1;
		_putchar(n + '0');
		return (n);
	}
	else
	{
		n = n % 10;
		_putchar(n + '0');
		return (n);
	}
}
