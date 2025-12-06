/*
 * File: 7-print_square.c
 * Auth: Amin Israfilov
 */

#include "main.h"

/**
 * print_square - Prints a square followed by a new line.
 * @size: The size length of the square.
 *
 * Description: Uses the character '#' to draw the square.
 * If size is 0 or less, only prints a new line.
 * Return: void.
 */
void print_square(int size)
{
	int i;
	int lines;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (lines = 0; lines < size; lines++)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
