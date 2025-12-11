/*
 * File: 5-rev_string.c
 * Auth: Amin Israfilov
 */

#include "main.h"

/**
 * rev_string - Function that reverses a string.
 * @s: The string to print
 */
void rev_string(char *s)
{
	int i = 0;
	int b = 0;

	while (s[i] != '\0')
	{
		b++;
		i++;
	}
	for (b = b - 1; b >= 0; b--)
		_putchar(s[b]);
	_putchar('\n');
}
