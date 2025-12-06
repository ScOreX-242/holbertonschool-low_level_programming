/*
 * File: 10-print_triangle.c
 * Auth: Amin Israfilov
 */

#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int line, index;

	if (size > 0)
	{
		for (line = 1; line <= size; hash++)
		{
			for (index = size - line; index > 0; index--)
				_putchar(' ');

			for (index = 0; index < line; index++)
				_putchar('#');

			if (line == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}


