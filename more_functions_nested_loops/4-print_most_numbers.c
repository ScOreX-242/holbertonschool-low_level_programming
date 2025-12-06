/*
 * File: 4-print_most_numbers.c
 * Auth: Amin Israfilov
 */

#include "main.h"

/**
 * print_most_numbers - Prints the digits 0 through 9, excluding 2 and 4.
 *
 * Description: Prints the numbers 0 to 9, except for 2 and 4,
 * followed by a new line.
 * Return: void.
 */
void print_most_numbers(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		if (digit != '2' && digit != '4')
		{
			_putchar(digit);
		}
	}
	_putchar('\n');
}
