/*
 * File: 3-print_numbers.c
 * Auth: Amin Israfilov
 */

#include "main.h"

/**
 * print_numbers - Prints the digits 0 through 9.
 *
 * Description: Prints the numbers 0 to 9, followed by a new line.
 * Return: void.
 */
void print_numbers(void)
{
	char digit;

	for (digit = 48; digit >= 48 && digit <= 57; digit++)
	{
		_putchar(digit);
	}
	_putchar('\n');
}
