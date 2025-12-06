/*
 * File: 3-print_numbers.c
 * Auth: Amin Israfilov
 */

#include "main.h"

/**
 * mul - Multiples two integers.
 * @a: The first integer to be multiplied.
 * @b: The second integer to be multiplied.
 *
 * Return: The result of the multiplication.
 */
void print_numbers(void)
{
	char digit = 48;
  for(digit; digit>48 && digit<=57; digit++)
    _putchar(digit);
  _putchar('\n');
}
