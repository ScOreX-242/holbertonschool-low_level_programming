/*
 * File: 6-print_line.c
 * Auth: Amin Israfilov
 */

#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of times the character '_' should be printed.
 *
 * Description: Prints a line consisting of the character '_',
 * followed by a new line. If n is 0 or less, only prints '\n'.
 * Return: void.
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
